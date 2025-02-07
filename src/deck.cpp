#include "headers/main.h"


std::map<char, int> cardValues = {
	{'A', 1},
	{'2', 2},
	{'3', 3},
	{'4', 4},
	{'5', 5},
	{'6', 6},
	{'7', 7},
	{'8', 8},
	{'9', 9},
	{'Q', 10},
	{'K', 10},
	{'J', 10},
};

char cards[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'Q', 'K', 'J'};

std::vector<char> RandomCards(std::vector<char> Deck, int cardCount) {
   int card;

   for (int i = 0; i < cardCount; i++) {
	card = rand() % 13;

	Deck.push_back(cards[card]);
   }

   return Deck;
}
