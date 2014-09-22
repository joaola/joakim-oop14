#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;
class Dice
{
private:
	int value;
public:
	Dice();
	void ThrowDice();
	void PrintDice();
	~Dice();
};

