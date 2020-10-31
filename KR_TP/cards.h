#pragma once



//char *title[] = { "2","3","4","5","6","7","8","9","10","J","Q","K","A" };

struct Card{
	unsigned int value : 4;
	unsigned int suit : 2;
	unsigned int weight : 4;
};

class Card_Suits {
private:
	Card card[52];
public:
	
	void Deck();
	void PrintCard(bool comp, int value, int suit);

};
