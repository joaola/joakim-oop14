#include <iostream>
#include <string>
#include "Dice.h"
#include <conio.h>
#include "Console.h"
using namespace Course; //Slipper skriva Course::Console::clrscr();
using namespace std;
int main(){
	char c;
	Dice die1;
	Dice die2;
	while (1)
	{
		if (_kbhit())
		{
			c = _getch();

			if (c == '\r') // '\r' = Enter
			{
				Console::clrscr();
				die1.ThrowDice();
				die2.ThrowDice();
				die1.PrintDice();
				die2.PrintDice();

			}
			else
				break;
		}
	}
	return 0;
}