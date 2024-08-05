#include "../inc/deck.h"
#include <iostream>
#include <ncursesw/ncurses.h>
// #include <ncurses.h>
#include <locale.h>

int player_cards_x = 0;
int player_cards_y = 0;
int dealer_cards_x = 0;
int dealer_cards_y = 0;
// int *dealer_hand = nullptr;
// int *player_hand = nullptr;

void printCards(int card, int x, int y) {
	// printw("card: %d\n", card);
	// printw("x: %d\n", x);
	// printw("y: %d\n", y);
	if (card == 0) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│A  │");
		mvprintw(y + 2, x, "│ ♠ │");
		mvprintw(y + 3, x, "│  Ɐ│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 1) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│2  │");
		mvprintw(y + 2, x, "│ ♠ │");
		mvprintw(y + 3, x, "│  2│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 2) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│3  │");
		mvprintw(y + 2, x, "│ ♠ │");
		mvprintw(y + 3, x, "│  3│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 3) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│4  │");
		mvprintw(y + 2, x, "│ ♠ │");
		mvprintw(y + 3, x, "│  4│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 4) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│5  │");
		mvprintw(y + 2, x, "│ ♠ │");
		mvprintw(y + 3, x, "│  5│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 5) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│6  │");
		mvprintw(y + 2, x, "│ ♠ │");
		mvprintw(y + 3, x, "│  6│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 6) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│7  │");
		mvprintw(y + 2, x, "│ ♠ │");
		mvprintw(y + 3, x, "│  7│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 7) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│8  │");
		mvprintw(y + 2, x, "│ ♠ │");
		mvprintw(y + 3, x, "│  8│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 8) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│9  │");
		mvprintw(y + 2, x, "│ ♠ │");
		mvprintw(y + 3, x, "│  9│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 9) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│10 │");
		mvprintw(y + 2, x, "│ ♠ │");
		mvprintw(y + 3, x, "│ 10│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 10) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│J  │");
		mvprintw(y + 2, x, "│ ♠ │");
		mvprintw(y + 3, x, "│  J│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 11) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│Q  │");
		mvprintw(y + 2, x, "│ ♠ │");
		mvprintw(y + 3, x, "│  Q│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 12) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│K  │");
		mvprintw(y + 2, x, "│ ♠ │");
		mvprintw(y + 3, x, "│  K│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 13) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│A  │");
		mvprintw(y + 2, x, "│ ♥ │");
		mvprintw(y + 3, x, "│  Ɐ│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 14) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│2  │");
		mvprintw(y + 2, x, "│ ♥ │");
		mvprintw(y + 3, x, "│  2│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 15) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│3  │");
		mvprintw(y + 2, x, "│ ♥ │");
		mvprintw(y + 3, x, "│  3│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 16) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│4  │");
		mvprintw(y + 2, x, "│ ♥ │");
		mvprintw(y + 3, x, "│  4│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 17) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│5  │");
		mvprintw(y + 2, x, "│ ♥ │");
		mvprintw(y + 3, x, "│  5│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 18) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│6  │");
		mvprintw(y + 2, x, "│ ♥ │");
		mvprintw(y + 3, x, "│  6│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 19) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│7  │");
		mvprintw(y + 2, x, "│ ♥ │");
		mvprintw(y + 3, x, "│  7│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 20) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│8  │");
		mvprintw(y + 2, x, "│ ♥ │");
		mvprintw(y + 3, x, "│  8│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 21) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│9  │");
		mvprintw(y + 2, x, "│ ♥ │");
		mvprintw(y + 3, x, "│  9│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 22) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│10 │");
		mvprintw(y + 2, x, "│ ♥ │");
		mvprintw(y + 3, x, "│ 10│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 23) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│J  │");
		mvprintw(y + 2, x, "│ ♥ │");
		mvprintw(y + 3, x, "│  J│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 24) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│Q  │");
		mvprintw(y + 2, x, "│ ♥ │");
		mvprintw(y + 3, x, "│  Q│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 25) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│K  │");
		mvprintw(y + 2, x, "│ ♥ │");
		mvprintw(y + 3, x, "│  K│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 26) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│A  │");
		mvprintw(y + 2, x, "│ ♣ │");
		mvprintw(y + 3, x, "│  Ɐ│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 27) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│2  │");
		mvprintw(y + 2, x, "│ ♣ │");
		mvprintw(y + 3, x, "│  2│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 28) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│3  │");
		mvprintw(y + 2, x, "│ ♣ │");
		mvprintw(y + 3, x, "│  3│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 29) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│4  │");
		mvprintw(y + 2, x, "│ ♣ │");
		mvprintw(y + 3, x, "│  4│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 30) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│5  │");
		mvprintw(y + 2, x, "│ ♣ │");
		mvprintw(y + 3, x, "│  5│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 31) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│6  │");
		mvprintw(y + 2, x, "│ ♣ │");
		mvprintw(y + 3, x, "│  6│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 32) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│7  │");
		mvprintw(y + 2, x, "│ ♣ │");
		mvprintw(y + 3, x, "│  7│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 33) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│8  │");
		mvprintw(y + 2, x, "│ ♣ │");
		mvprintw(y + 3, x, "│  8│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 34) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│9  │");
		mvprintw(y + 2, x, "│ ♣ │");
		mvprintw(y + 3, x, "│  9│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 35) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│10 │");
		mvprintw(y + 2, x, "│ ♣ │");
		mvprintw(y + 3, x, "│ 10│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 36) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│J  │");
		mvprintw(y + 2, x, "│ ♣ │");
		mvprintw(y + 3, x, "│  J│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 37) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│Q  │");
		mvprintw(y + 2, x, "│ ♣ │");
		mvprintw(y + 3, x, "│  Q│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 38) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│K  │");
		mvprintw(y + 2, x, "│ ♣ │");
		mvprintw(y + 3, x, "│  K│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 39) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│A  │");
		mvprintw(y + 2, x, "│ ♦ │");
		mvprintw(y + 3, x, "│  Ɐ│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 40) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│2  │");
		mvprintw(y + 2, x, "│ ♦ │");
		mvprintw(y + 3, x, "│  2│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 41) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│3  │");
		mvprintw(y + 2, x, "│ ♦ │");
		mvprintw(y + 3, x, "│  3│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 42) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│4  │");
		mvprintw(y + 2, x, "│ ♦ │");
		mvprintw(y + 3, x, "│  4│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 43) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│5  │");
		mvprintw(y + 2, x, "│ ♦ │");
		mvprintw(y + 3, x, "│  5│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 44) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│6  │");
		mvprintw(y + 2, x, "│ ♦ │");
		mvprintw(y + 3, x, "│  6│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 45) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│7  │");
		mvprintw(y + 2, x, "│ ♦ │");
		mvprintw(y + 3, x, "│  7│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 46) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│8  │");
		mvprintw(y + 2, x, "│ ♦ │");
		mvprintw(y + 3, x, "│  8│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 47) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│9  │");
		mvprintw(y + 2, x, "│ ♦ │");
		mvprintw(y + 3, x, "│  9│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 48) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│10 │");
		mvprintw(y + 2, x, "│ ♦ │");
		mvprintw(y + 3, x, "│ 10│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 49) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│J  │");
		mvprintw(y + 2, x, "│ ♦ │");
		mvprintw(y + 3, x, "│  J│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 50) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│Q  │");
		mvprintw(y + 2, x, "│ ♦ │");
		mvprintw(y + 3, x, "│  Q│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == 51) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│K  │");
		mvprintw(y + 2, x, "│ ♦ │");
		mvprintw(y + 3, x, "│  K│");
		mvprintw(y + 4, x, "╰───╯");
	}
	else if (card == -1) {
		mvprintw(y + 0, x, "╭───╮");
		mvprintw(y + 1, x, "│xxx│");
		mvprintw(y + 2, x, "│xxx│");
		mvprintw(y + 3, x, "│xxx│");
		mvprintw(y + 4, x, "╰───╯");
	}
	refresh();
}

int find_card(int card, std::vector<int> deck) {
	for (int i = 0; i < deck.size(); i++)
		if (deck[i] == card)
			return card;
	return -1;
}

void printCorner(void) {
	int y, x;
	getmaxyx(stdscr, y, x);
	mvprintw(0, 0, "╔");
	for (int i = 2; i < x; i++)
		printw("━");
	mvprintw(0, x - 1, "╗");
	for (int i = 1; i < y - 1; i++) {
		if (i == 1)
			mvprintw(i, x / 2 - 3, "DEALER");
		if (i == y - 2)
			mvprintw(i, x / 2 - 3, "PLAYER");
		mvprintw(i, 0, "┃");
		mvprintw(i, x - 1, "┃");
	}
	mvprintw(y - 1, 0, "╚");
	for (int i = 1; i < x; i++) {
		mvprintw(y - 1, i, "━");
	}
	mvprintw(y - 1, x - 1, "╝");
		// mvprintw(0, 0,"╔━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╗");

}

int calc_val_card(std::vector<int> deck) {
	int val = 0;
	int as = 0;
	for (int i = 0; i < deck.size(); i++) {
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

void add_card(int card, std::vector<int> &deck) {
	deck.push_back(card);
}

void add_playerCard(std::vector<int> &dealer_hand, std::vector<int> &player_hand) {
	if (calc_val_card(player_hand) >= 21)
		return ;
	int i = rand() % 52;
	while (i == find_card(i, player_hand) || i == find_card(i, dealer_hand))
		i = rand() % 52;
	player_hand.push_back(i);
}

void add_dealerCard(std::vector<int> &dealer_hand, std::vector<int> &player_hand) {
	if (calc_val_card(dealer_hand) >= 17)
		return ;
	int i = rand() % 52;
	while (i == find_card(i, player_hand) || i == find_card(i, dealer_hand))
		i = rand() % 52;
	dealer_hand.push_back(i);
}


void	refresh_card(std::vector<int> dealer_hand, std::vector<int> player_hand) {
	
	
	int player_counter_x = 0;
	int dealer_counter_x = 0;
	int player_counter_y = 0;
	int dealer_counter_y = 0;
	
	getmaxyx(stdscr, player_cards_y, player_cards_x);
	getmaxyx(stdscr, dealer_cards_y, dealer_cards_x);
	getmaxyx(stdscr, player_counter_y, player_counter_x);
	getmaxyx(stdscr, dealer_counter_y, dealer_counter_x);
	player_cards_x = player_cards_x / 2 - 2 - player_hand.size();
	dealer_cards_x = dealer_cards_x / 2 - 2 - dealer_hand.size();
	player_cards_y = player_cards_y - 2 - 10;
	dealer_cards_y = 6;
	for (int i = 0; i < dealer_hand.size(); i++) {
		//printw("laaaaaaa");
		printCards(dealer_hand[i], dealer_cards_x, dealer_cards_y);
		dealer_cards_x += 3;
	}
	for (int i = 0; i < player_hand.size(); i++) {
		printCards(player_hand[i], player_cards_x , player_cards_y );
		//printw("hello: [%d]", player_cards_x);
		//printw(" | player size is : [%d] |", player_hand[i]);
		player_cards_x += 3;
	}
	//////////////////////////////////////////////////////////////////
	if (calc_val_card(player_hand) > 21) {
		mvprintw(player_counter_y - 14, player_counter_x / 2 - 2, "[");
		attron(COLOR_PAIR(2));
		mvprintw(player_counter_y - 14, player_counter_x / 2 - 1, "%d", calc_val_card(player_hand));
		attroff(COLOR_PAIR(2));
		mvprintw(player_counter_y - 14, player_counter_x / 2 + 1, "]");

	}
	else if (calc_val_card(player_hand) == 21) {
		mvprintw(player_counter_y - 14, player_counter_x / 2 - 2, "[");
		attron(COLOR_PAIR(1));
		mvprintw(player_counter_y - 14, player_counter_x / 2 - 1, "%d", calc_val_card(player_hand));
		attroff(COLOR_PAIR(1));
		mvprintw(player_counter_y - 14, player_counter_x / 2 + 1, "]");
	}
	else
		mvprintw(player_counter_y - 14, player_counter_x / 2 - 2, "[%d]", calc_val_card(player_hand));
	
	if (calc_val_card(dealer_hand) > 21) {
		mvprintw(12, dealer_counter_x / 2 - 2, "[");
		attron(COLOR_PAIR(2));
		mvprintw(12, dealer_counter_x / 2 - 1, "%d", calc_val_card(dealer_hand));
		attroff(COLOR_PAIR(2));
		mvprintw(12, dealer_counter_x / 2 + 1, "]");
	}
	else if (calc_val_card(dealer_hand) == 21) {
		mvprintw(12, dealer_counter_x / 2 - 2, "[");
		attron(COLOR_PAIR(1));
		mvprintw(12, dealer_counter_x / 2 - 1, "%d", calc_val_card(dealer_hand));
		attroff(COLOR_PAIR(1));
		mvprintw(12, dealer_counter_x / 2 + 1, "]");
	}
	else
		mvprintw(12 , dealer_counter_x / 2 - 2, "[%d]", calc_val_card(dealer_hand));

	//////////////////////////////////////////////////////////////////
	//printCards(5, 0, 0);

}


void init_game(std::vector<int> &dealer_hand, std::vector<int> &player_hand) {
	clear();
	printCorner();
	add_dealerCard(dealer_hand, player_hand);
	add_card(-1, dealer_hand);
	add_playerCard(dealer_hand, player_hand);
	add_playerCard(dealer_hand, player_hand);
	refresh_card(dealer_hand, player_hand);
	refresh();
}


int main(void) {
	setlocale(LC_ALL, "");
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	srand(time(NULL));
	start_color();          // Start color functionality
	init_pair(1, COLOR_GREEN, COLOR_BLACK); // Define color pair 1 as green on black
	init_pair(2, COLOR_RED, COLOR_BLACK);
	std::vector<int> deck;
	std::vector<int> dealer_hand;
	int i = rand() % 52;
	bool game = true;
	init_game(deck, dealer_hand);
	while (game == true) {
		clear();
		printCorner();
		refresh_card(deck, dealer_hand);

		//refresh_game();
		int ch = getch();
		if (ch == 'q') {
			game = false;
			break ;
		}// space for it
		if (ch == ' ') {
			//printw("okaye");
			add_playerCard(deck, dealer_hand);

			//deck.push_back(i);
			//add_card(i, dealer_hand);


			//printCards(i, deck.size(), rand() % 30, rand() % 30);
			i = rand() % 52;
		}
		if (ch == 'r') {
			//deck.clear();
		}

	}
	endwin();

	return 0;
}