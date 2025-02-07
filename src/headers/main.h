/* modules */
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <stdlib.h>

/* variables */
extern std::map<char, int> cardsValue;
extern char cards[12];

/* functions */
std::vector<int> RandomCards(std::vector<int> Deck, int cardCount);
