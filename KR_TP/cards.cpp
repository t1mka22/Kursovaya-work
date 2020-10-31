#include "cards.h"
#include <iostream>

using namespace std;


void Card_Suits::Deck(){
	for (int i = 0; i < 52; i++) {
		card[i].value = i % 13;
		card[i].suit = i / 13;
		card[i].weight = card[i].weight;
		if (card[i].value >= 11 && card[i].value <= 12) {
			card[i].weight = 10;
		}
		if (card[i].value == 13) {
			card[i].weight = 11;
		}
	}
}

void Card_Suits::PrintCard(bool comp, int value = 0, int suit = 0) {
	
}

