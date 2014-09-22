#include "TicTacToe1.h"
#include <iostream>
#include "Console.h"
using namespace Course;
using namespace std;

TicTacToe1::TicTacToe1()
{
	int x, y;
	for (x = 0; x < 3; x++){
		for (y = 0; y < 3; y++){
			this->board[x][y] = '_';
		}
	}
	this->xcursor = 0;
	this->ycursor = 0;
}

void TicTacToe1::DrawBoard(){ //Ritar upp spelbrädan
	int x, y;
	for (x = 0; x < 3; x++){
		for (y = 0; y < 3; y++){
			Console::gotoxy(x * 3, y * 3);
			cout << this->board[x][y];
		}
	}
}

void TicTacToe1::GameStatus(){ //Kollar vem som har vunnit
	for (int x = 0; x < 3; x++){
		if (this->board[x][0] == 'o' && this->board[x][1] == 'o' && this->board[x][2] == 'o' || this->board[x][0] == 'x' && this->board[x][1] == 'x' && this->board[x][2] == 'x') { //Kollar vinnare horisontellt
			if (turn == 0){
				Console::gotoxy(0, 10);
				cout << "o vann!";
			}
			else{
				Console::gotoxy(0, 10);
				cout << "x vann!";
			}
		}
		}
	for (int y = 0; y < 3; y++){ //Kollar vinnare vertikalt
		if (this->board[0][y] == 'o' && this->board[1][y] == 'o' && this->board[2][y] == 'o' || this->board[0][y] == 'x' && this->board[1][y] == 'x' && this->board[2][y] == 'x') { //Kollar vinnare vertikalt
			if (turn == 0){
				Console::gotoxy(0, 10);
				cout << "o vann!";
			}
			else{
				Console::gotoxy(0, 10);
				cout << "x vann!";
				
			}

		}

	}

		if (this->board[0][0] == 'o' && this->board[1][1] == 'o' && this->board[2][2] == 'o' || this->board[0][0] == 'x' && this->board[1][1] == 'x' && this->board[2][2] == 'x'){ //Kollar vinnare diagonalt
			if (turn == 0){
				Console::gotoxy(0, 10);
				cout << "o vann!";
			}
			else{
				Console::gotoxy(0, 10);
				cout << "x vann!";
			}
		}
		if (this->board[2][0] == 'o' && this->board[1][1] == 'o' && this->board[0][2] == 'o' || this->board[2][0] == 'x' && this->board[1][1] == 'x' && this->board[0][2] == 'x'){
			if (turn == 0){
				Console::gotoxy(0, 10);
				cout << "o vann!";
			}
			else{
				Console::gotoxy(0, 10);
				cout << "x vann!";
			}
		}
	}

void TicTacToe1::MoveCursor(char c){ //Flytta markören
	if (c == 'w' && this->ycursor>0)
		this->ycursor -= 1;
	else if (c == 's' && this->ycursor<2)
		this->ycursor += 1;
	else if (c == 'a' && this->xcursor > 0)
		this->xcursor -= 1;
	else if (c == 'd'&&xcursor < 2)
		this->xcursor += 1;
	Console::gotoxy(this->xcursor*3, this->ycursor*3);
}

void TicTacToe1::PlayerTurn(char c){ //Turordning för spelare
	if (c == '\r'){
		if (this->turn == 0 && this->board[this->xcursor][this->ycursor] == '_'){
			this->board[this->xcursor][this->ycursor] = 'x';
			turn = 1;
		}
		else if (this->turn == 1 && this->board[this->xcursor][this->ycursor] == '_'){
			this->board[this->xcursor][this->ycursor] = 'o'; 
			turn = 0;
		}
		else {
			Console::gotoxy(0, 10);

		}
	}
	
}

TicTacToe1::~TicTacToe1()
{
}