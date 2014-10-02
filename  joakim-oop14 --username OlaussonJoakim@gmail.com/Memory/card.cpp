#include "card.h"
#include <vector>
#include <iostream>


card::card()
{
	front = 'M';
	back = -1;
	inGame = false;
}
card::card(int b){
	front = 'M';
	back = b;
	inGame = true;
}


card::~card()
{

}
