#include "../inc/Deck.h"

void printCoins(int coin, int x, int y) {
	mvprintw(y, x, "(%d)", coin);
}

void printCards(int card, int x, int y) {
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