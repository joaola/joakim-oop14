#pragma once
#include<vector>
#include "card.h"
#include "player.h"
using namespace std;
class memory
{
private:
	void init();
	int r;
	int c;
	int i;
	int j;
	int p;
	int xcursor;
	int ycursor;
public:
	memory();
	vector<player> players;
	vector<vector<card>> *cvv;
	void showPlayers();
	void countScore();
	void drawBoard();
	void moveCursor(char c);
	memory(int r, int c, int p);
	void shuffleCards();
	void flipCards(char c);
	~memory();
};

