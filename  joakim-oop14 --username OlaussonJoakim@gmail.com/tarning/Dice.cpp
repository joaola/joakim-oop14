#include "Dice.h"
#include <string>
#include <cstdlib>
#include <iostream>
#include <time.h>

Dice::Dice()
	{
		srand(time(NULL));
		this->value = 0;
	}


void Dice::ThrowDice() {
	this->value = rand() % 6 + 1; //rand mellan 1-6
}

void Dice::PrintDice(){
	if (this->value == 1)
		cout << "!-----!" << endl << "!     !" << endl << "!  x  !" << endl << "!     !" << endl << "!-----!" << endl << endl;
	else if (this->value == 2)
		cout << "!-----!" << endl << "! x   !" << endl << "!     !" << endl << "!   x !" << endl << "!-----!" << endl << endl;
	else if (this->value == 3)
		cout << "!-----!" << endl << "! x   !" << endl << "!  x  !" << endl << "!   x !" << endl << "!-----!" << endl << endl;
	else if (this->value == 4)
		cout << "!-----!" << endl << "! x x !" << endl << "!     !" << endl << "! x x !" << endl << "!-----!" << endl << endl;
	else if (this->value == 5)
		cout << "!-----!" << endl << "! x x !" << endl << "!  x  !" << endl << "! x x !" << endl << "!-----!" << endl << endl;
	else if (this->value == 6)
		cout << "!-----!" << endl << "!x x x!" << endl << "!     !" << endl << "!x x x!" << endl << "!-----!" << endl << endl;

}


Dice::~Dice()
{
}
