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
	for (int i = 0; i < this->p; i++)
	{
		players.push_back(player());
	}
	init();
}
memory::memory(){
	this->r = r;
	this->c = c;
	this->p = p;
	this->ycursor = 0;
	this->xcursor = 0;
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
			(*cvv)[i][j] = card(b+65);
		}
	}

	for (int i = r / 2; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			int b = (i - r / 2)*c + j;
			(*cvv)[i][j] = card(b+65);
		}
	}

}

void memory::drawBoard(){
	
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << (*cvv)[i][j].front << " ";
		}
		cout << endl;
		
	}
}

void memory::flipCards(char c){
	if (c == '\r'){
		cout << (*cvv)[this->xcursor][this->ycursor].back<< " ";
	}
}
	
void memory::moveCursor(char c){

	if (c == 'w' && this->ycursor>0)
		this->ycursor -= 1;
	else if (c == 's' && this->ycursor<this->c-1) // c-1 för att ta bort tom extra rad
		this->ycursor += 1;
	else if (c == 'a' && this->xcursor> 0)
		this->xcursor -= 1;
	else if (c == 'd'&&xcursor < this->c-1) //c-1 för att ta bort tom extra kolumn
		this->xcursor += 1;
	Console::gotoxy(this->xcursor*2, this->ycursor);

}

void memory::showPlayers(){
	for (int i = 0; i < this->p; i++)
	{
		Console::gotoxy(0, 20+i);

		cout << "Player " << i + 1 << ":" << players[i].getScore();
	}
}

void memory::countScore(){

}

void memory::shuffleCards(){
	srand(time_t(NULL));
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





