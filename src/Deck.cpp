#include "../inc/Deck.h"

void printCorner(void);

void printCards(int card, int x, int y);

Deck::Deck() {
	player_cards_x = 0;
	player_cards_y = 0;
	dealer_cards_x = 0;
	dealer_cards_y = 0;
	NB_CARDS = 52;
	NB_DECKS = 6;
	actual_menu = 1;
	loose_win_menu = 0;
}

Deck::~Deck() {
}

int		Deck::find_card(int card) {
	int nb_card = 0;
	for (std::vector<int>::size_type i = 0; i < player_hand.size(); i++)
		if (player_hand[i] == card)
			nb_card++;
	for (std::vector<int>::size_type i = 0; i < dealer_hand.size(); i++)
		if (dealer_hand[i] == card)
			nb_card++;
	if (nb_card == 0)
		return -1;
	if (nb_card >= NB_DECKS) {
		std::cerr << nb_card << std::endl;
		return card;
	}
	return -1;
}
int		Deck::calc_val_card(std::vector<int> deck) {
	int val = 0;
	int as = 0;
	for (std::vector<int>::size_type i = 0; i < deck.size(); i++) {
		if (deck[i] == -1)
			continue ;
		if (deck[i] % 13 == 0)
			as++;
		else if (deck[i] % 13 >= 10)
			val += 10;
		else
			val += deck[i] % 13 + 1;
	}
	if (val > 10 && as > 0)
		val += as;
	else if (as > 0)
		val += 11 + as - 1;
	return val;
}

int		Deck::calc_val_card_player() {
	int val = 0;
	int as = 0;
	for (std::vector<int>::size_type i = 0; i < this->player_hand.size(); i++) {
		if (this->player_hand[i] == -1)
			continue ;
		if (this->player_hand[i] % 13 == 0)
			as++;
		else if (this->player_hand[i] % 13 >= 10)
			val += 10;
		else
			val += this->player_hand[i] % 13 + 1;
	}
	if (val > 10 && as > 0)
		val += as;
	else if (as > 0)
		val += 11 + as - 1;
	return val;
}

int		Deck::calc_val_card_dealer() {
	int val = 0;
	int as = 0;
	for (std::vector<int>::size_type i = 0; i < this->dealer_hand.size(); i++) {
		if (this->dealer_hand[i] == -1)
			continue ;
		if (this->dealer_hand[i] % 13 == 0)
			as++;
		else if (this->dealer_hand[i] % 13 >= 10)
			val += 10;
		else
			val += this->dealer_hand[i] % 13 + 1;
	}
	if (val > 10 && as > 0)
		val += as;
	else if (as > 0)
		val += 11 + as - 1;
	return val;
}

void	Deck::add_card(int card, std::vector<int> &deck) {
	deck.push_back(card);
}
void	Deck::add_playerCard(void) {
	if (calc_val_card(this->player_hand) >= 21)
		return ;
	int i = rand() % NB_CARDS;
	while (i == find_card(i))
		i = rand() % NB_CARDS;
	this->player_hand.push_back(i);
}
void	Deck::add_dealerCard(void) {
	if (calc_val_card(this->dealer_hand) >= 17)
		return ;
	int i = rand() % NB_CARDS;
	while (i == find_card(i))
		i = rand() % NB_CARDS;
	if (this->dealer_hand.size() == 2 && this->dealer_hand[1] == -1)
		this->dealer_hand[1] = i;
	else
		this->dealer_hand.push_back(i);
}
void	Deck::refresh_card(void) {
	int player_counter_x = 0;
	int dealer_counter_x = 0;
	int player_counter_y = 0;
	int dealer_counter_y = 0;
	
	getmaxyx(stdscr, this->player_cards_y, this->player_cards_x);
	getmaxyx(stdscr, this->dealer_cards_y, this->dealer_cards_x);
	getmaxyx(stdscr, player_counter_y, player_counter_x);
	getmaxyx(stdscr, dealer_counter_y, dealer_counter_x);
	(void)dealer_counter_y;
	player_cards_x = player_cards_x / 2 - 2 - player_hand.size();
	dealer_cards_x = dealer_cards_x / 2 - 2 - dealer_hand.size();
	player_cards_y = player_cards_y - 2 - 10;
	dealer_cards_y = 6;
	for (std::vector<int>::size_type i = 0; i < dealer_hand.size(); i++) {
		printCards(dealer_hand[i], dealer_cards_x, dealer_cards_y);
		dealer_cards_x += 3;
	}
	for (std::vector<int>::size_type i = 0; i < player_hand.size(); i++) {
		printCards(player_hand[i], player_cards_x , player_cards_y );
		player_cards_x += 3;
	}
	if (actual_menu == 0) {
		mvprintw(player_counter_y - 5, player_counter_x / 2 - 10, "HIT");
		mvprintw(player_counter_y - 5, player_counter_x / 2 + 5, "STAND");
	}
	else if (actual_menu == 2) {
		mvprintw(player_counter_y - 5, player_counter_x / 2 - 10, "HIT");
		attron(COLOR_PAIR(2));
		mvprintw(player_counter_y - 5, player_counter_x / 2 + 5, "STAND");
		attroff(COLOR_PAIR(2));
	}
	else if (actual_menu == 1) {
		attron(COLOR_PAIR(2));
		mvprintw(player_counter_y - 5, player_counter_x / 2 - 10, "HIT");
		attroff(COLOR_PAIR(2));
		mvprintw(player_counter_y - 5, player_counter_x / 2 + 5, "STAND");
	}
	if (calc_val_card(player_hand) > 21) {
		mvprintw(player_counter_y - 14, player_counter_x / 2 - 2, "[");
		attron(COLOR_PAIR(3));
		mvprintw(player_counter_y - 14, player_counter_x / 2 - 1, "%d", calc_val_card(player_hand));
		attroff(COLOR_PAIR(3));
		mvprintw(player_counter_y - 14, player_counter_x / 2 + 1, "]");

	}
	else if (calc_val_card(player_hand) == 21) {
		mvprintw(player_counter_y - 14, player_counter_x / 2 - 2, "[");
		attron(COLOR_PAIR(4));
		mvprintw(player_counter_y - 14, player_counter_x / 2 - 1, "%d", calc_val_card(player_hand));
		attroff(COLOR_PAIR(4));
		mvprintw(player_counter_y - 14, player_counter_x / 2 + 1, "]");
	}
	else
		mvprintw(player_counter_y - 14, player_counter_x / 2 - 2, "[%d]", calc_val_card(player_hand));
	if (calc_val_card(dealer_hand) > 21) {
		mvprintw(12, dealer_counter_x / 2 - 2, "[");
		attron(COLOR_PAIR(3));
		mvprintw(12, dealer_counter_x / 2 - 1, "%d", calc_val_card(dealer_hand));
		attroff(COLOR_PAIR(3));
		mvprintw(12, dealer_counter_x / 2 + 1, "]");
	}
	else if (calc_val_card(dealer_hand) == 21) {
		mvprintw(12, dealer_counter_x / 2 - 2, "[");
		attron(COLOR_PAIR(4));
		mvprintw(12, dealer_counter_x / 2 - 1, "%d", calc_val_card(dealer_hand));
		attroff(COLOR_PAIR(4));
		mvprintw(12, dealer_counter_x / 2 + 1, "]");
	}
	else
		mvprintw(12 , dealer_counter_x / 2 - 2, "[%d]", calc_val_card(dealer_hand));

}

void Deck::print_loose_screen() {
	int x, y;
	getmaxyx(stdscr, y, x);
	clear();
	printCorner();
	attron(COLOR_PAIR(3));
	mvprintw(y / 2, x / 2 - 5, "YOU LOOSE");
	attroff(COLOR_PAIR(3));
	
}

void Deck::print_win_screen() {
	int x, y;
	getmaxyx(stdscr, y, x);
	clear();
	printCorner();
	attron(COLOR_PAIR(4));
	mvprintw(y / 2, x / 2 - 5, "YOU WIN");
	attroff(COLOR_PAIR(4));
}

void Deck::print_even_screen() {
	int x, y;
	getmaxyx(stdscr, y, x);
	clear();
	printCorner();
	attron(COLOR_PAIR(2));
	mvprintw(y / 2, x / 2 - 5, "EVEN");
	attroff(COLOR_PAIR(2));
}

void	Deck::init_game(void) {
	clear();
	printCorner();
	add_dealerCard();
	add_card(-1, dealer_hand);
	add_playerCard();
	add_playerCard();
	refresh_card();
	refresh();
}

void	Deck::reset_game(void) {
	player_hand.clear();
	dealer_hand.clear();
	actual_menu = 1;
	loose_win_menu = 0;
	init_game();
}