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
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_BLACK, COLOR_WHITE);
	init_pair(3, COLOR_RED, COLOR_BLACK);
	init_pair(4, COLOR_GREEN, COLOR_BLACK);
	//int i = rand() % 52;
	bool game = true;
	deck.init_game();
	while (game == true) {
		clear();
		printCorner();
		deck.refresh_card();
		int ch = getch();
		if (ch == 'q') {
			game = false;
			break ;
		}
		if (ch == KEY_LEFT && deck.actual_menu > 1) {
			deck.actual_menu--;
		}
		if (ch == KEY_RIGHT && deck.actual_menu < 2) {
			deck.actual_menu++;
		}
		if (ch == ' ' || ch == '\n') {
			if (deck.actual_menu == 1) {
				deck.add_playerCard();
				deck.refresh_card();
			}
			if (deck.actual_menu == 2) {
				while (deck.calc_val_card_dealer() < 17) {
					deck.add_dealerCard();
					deck.refresh_card();
					usleep(355555);
				}
				if ((deck.calc_val_card_dealer() < deck.calc_val_card_player() && deck.calc_val_card_player() <= 21) || deck.calc_val_card_dealer() > 21) {
					deck.refresh_card();
					usleep(1000000);
					while (true) {
						deck.print_win_screen();
						ch = getch();
						if (ch == KEY_LEFT && deck.loose_win_menu > 1) {
							deck.loose_win_menu--;
						}
						if (ch == KEY_RIGHT && deck.loose_win_menu <= 2) {
							deck.loose_win_menu++;
						}
						//deck.reset_game();
						if (ch == ' ' || ch == '\n') {
							if (deck.loose_win_menu == 1) {
								deck.reset_game();
								break ;
							}
							if (deck.loose_win_menu == 2) {
								game = false;
								break ;
							}
						}
					}
				}
				else if (deck.calc_val_card_dealer() == deck.calc_val_card_player()) {
					deck.refresh_card();
					usleep(1000000);
					while (true) {
						deck.print_even_screen();
						ch = getch();
						if (ch == KEY_LEFT && deck.loose_win_menu > 1) {
							deck.loose_win_menu--;
						}
						if (ch == KEY_RIGHT && deck.loose_win_menu <= 2) {
							deck.loose_win_menu++;
						}
						//deck.reset_game();
						if (ch == ' ' || ch == '\n') {
							if (deck.loose_win_menu == 1) {
								deck.reset_game();
								break ;
							}
							if (deck.loose_win_menu == 2) {
								game = false;
								break ;
							}
						}
					}
				}
				else {
					deck.refresh_card();
					usleep(1000000);
					while (true) {
						deck.print_loose_screen();
						ch = getch();
						if (ch == KEY_LEFT && deck.loose_win_menu > 1) {
							deck.loose_win_menu--;
						}
						if (ch == KEY_RIGHT && deck.loose_win_menu <= 2) {
							deck.loose_win_menu++;
						}
						//deck.reset_game();
						if (ch == ' ' || ch == '\n') {
							if (deck.loose_win_menu == 1) {
								deck.reset_game();
								break ;
							}
							if (deck.loose_win_menu == 2) {
								game = false;
								break ;
							}
						}
					}
				}
			}
		}
		if (ch == 'r') {
			deck.add_dealerCard();
		}
		if (deck.calc_val_card_player() > 21) {
			deck.refresh_card();
			usleep(1000000);
			while (true) {
				deck.print_loose_screen();
				ch = getch();
				if (ch == KEY_LEFT && deck.loose_win_menu > 1) {
					deck.loose_win_menu--;
				}
				if (ch == KEY_RIGHT && deck.loose_win_menu <= 2) {
					deck.loose_win_menu++;
				}
				//deck.reset_game();
				if (ch == ' ' || ch == '\n') {
					if (deck.loose_win_menu == 1) {
						deck.reset_game();
						break ;
					}
					if (deck.loose_win_menu == 2) {
						game = false;
						break ;
					}
				}
			}
		}

	}
	endwin();

	return 0;
}