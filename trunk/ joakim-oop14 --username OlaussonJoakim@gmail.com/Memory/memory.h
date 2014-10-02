#pragma once
#include<vector>
#include "card.h"
#include "player.h"
using namespace std;
class memory
{
public:
	memory();
	vector<player> *pv;
	vector<vector<card>> *cvv;
	int r;
	int c;
	int p;

	~memory();
};

