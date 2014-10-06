#include "memory.h"
#include "player.h"
#include "card.h"
#include <iostream>
#include <vector>
#include "Console.h"
using namespace std;
using namespace Course;

memory::memory(int r, int c, int p){
	this->r = r;
	this->c = c;
	this->p = p;
}
memory::memory(){
	this->r = 0;
	this->c = 0;
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
			this->c = i;
			this->r = j;
		}
	}

	}

void memory::drawBoard(){
	int x;
	int y;
	for (x = 0; x < this->c; x++){
		for (y = 0; y < this->r; y++){
			Console::gotoxy(x * 3, y * 3);
			cout << &cvv[x][y] << 'M';
		}
	}
}
	
void moveCursor(char c){

}


