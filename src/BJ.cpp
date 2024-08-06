#include "../inc/Deck.h"

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
}

int main(void) {
	Deck deck;

	setlocale(LC_ALL, "");
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	srand(time(NULL));
	start_color();          // Start color functionality
	init_pair(1, COLOR_GREEN, COLOR_BLACK); // Define color pair 1 as green on black
	init_pair(2, COLOR_RED, COLOR_BLACK);
	//int i = rand() % 52;
	bool game = true;
	deck.init_game();
	while (game == true) {
		clear();
		printCorner();
		deck.refresh_card();

		//refresh_game();
		int ch = getch();
		if (ch == 'q') {
			game = false;
			break ;
		}// space for it
		if (ch == ' ') {
			//printw("okaye");
			deck.add_playerCard();

			//deck.push_back(i);
			//add_card(i, dealer_hand);


			//printCards(i, deck.size(), rand() % 30, rand() % 30);
			//i = rand() % 52;
		}
		if (ch == 'r') {
			//deck.clear();
		}

	}
	endwin();

	return 0;
}