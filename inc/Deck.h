#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ncursesw/ncurses.h>
#include <locale.h>

class Deck {
	public:
		Deck();
		~Deck();
		int		find_card(int card);
		int		calc_val_card(std::vector<int> deck);
		void	add_card(int card, std::vector<int> &deck);
		void	add_playerCard(void);
		void	add_dealerCard(void);
		void	refresh_card(void);
		void	init_game(void);
	private:
		int nb_decks;
		int player_cards_x;
		int player_cards_y;
		int dealer_cards_x;
		int dealer_cards_y;
		int	NB_CARDS;
		int NB_DECKS;
		std::vector<int> player_hand;
		std::vector<int> dealer_hand;
};