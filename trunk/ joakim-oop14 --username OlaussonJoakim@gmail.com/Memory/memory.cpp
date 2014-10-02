#include "memory.h"
#include "player.h"
#include "card.h"
#include <vector>
using namespace std;

memory::memory(){
	
	this->cvv = new vector<vector<card>>(r);
	for (int i = 0; i < r; i++)
	{
		(*cvv)[i] = vector<card>(c);
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			(*cvv)[i][j] = card();
		}
	}
}

		memory::~memory(){

	}