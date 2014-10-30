#include "TicTacToe1.h"
#include <iostream>
#include "Console.h"
#include <conio.h>
using namespace Course; //slipper skriva course::

int main(){
	char c=NULL;
	TicTacToe1 b;
	b.DrawBoard();
	while (1)
	{
			

		if (c == 'w' || c == 'a' || c == 's' || c == 'd' || c == '\r' || c == NULL) //wasd, enter eller null
		{
			b.PlayerTurn(c);
			b.DrawBoard();
			b.GameStatus();
			b.MoveCursor(c);
			
			c = _getch();
		}
		else
			break;
	
	}
	Console::gotoxy(0,10);
	system("Pause");
	return 0;
}