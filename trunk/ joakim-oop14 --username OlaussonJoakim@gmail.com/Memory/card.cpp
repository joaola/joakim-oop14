#include "card.h"
#include <vector>
#include <iostream>


card::card()
{
	front = 'M';
	back = -1;
	faceUp = false;
}
card::card(int b){
	front = 'M';
	back = b;
	faceUp = true;
}


card::~card()
{

}
