#pragma once
#include<vector>
#include "card.h"
#include "player.h"
using namespace std;
class memory
{
private:
	int xcursor, ycursor;
public:
	memory();
	vector<player> *pv;
	vector<vector<card>> *cvv;
	int i;
	int j;
	int r;
	int c;
	int p;
	void drawBoard();
	void moveCursor(char c);
	memory(int r, int c, int p);

	~memory();
};

