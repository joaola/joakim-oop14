#include "memory.h"
#include "player.h"
#include "card.h"
#include <iostream>
#include <ctime> //rand
#include <vector>
#include "Console.h"
using namespace std;
using namespace Course;

memory::memory(int r, int c, int p){
	this->r = r;
	this->c = c;
	this->p = p;
	init();
}
memory::memory(){
	this->r = r;
	this->c = c;
	this->p = p;
	}


void memory::init(){

	this->cvv = new vector<vector<card>>(r);
	for (int i = 0; i < r; i++)
	{
		(*cvv)[i] = vector<card>(c);
	}

	for (int i = 0; i < r / 2; i++)
	{
		for (int j = 0; j < c; j++)
		{
			int b = i*c + j;
			(*cvv)[i][j] = card(b);
		}
	}

	for (int i = r / 2; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			int b = (i - r / 2)*c + j;
			(*cvv)[i][j] = card(b);
		}
	}

}
void memory::drawBoard(){

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << (*cvv)[i][j].back << " ";
		}
		cout << endl;
	}

}
	
void memory::moveCursor(char c){

	if (c == 'w' && this->c>0)
		this->c -= 1;
	else if (c == 's' && this->c<2)
		this->c += 1;
	else if (c == 'a' && this->r> 0)
		this->r -= 1;
	else if (c == 'd'&&r < 2)
		this->r += 1;
	Console::gotoxy(this->c, this->r);

}

void memory::shuffleCards(){
	srand(time(NULL));
	for (int i = 0; i < 10000; i++)
	{
		int r1 = rand() % r;
		int c1 = rand() % c;
		int r2 = rand() % r;
		int c2 = rand() % c;

		card h = (*cvv)[r1][c1];
		(*cvv)[r1][c1] = (*cvv)[r2][c2];
		(*cvv)[r2][c2] = h;
	}
}

	memory::~memory()
	{
		delete cvv;

	}





