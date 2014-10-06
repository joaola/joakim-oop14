#include "card.h"
#include "player.h"
#include "memory.h""
#include <iostream>
using namespace std;
void main(){
	memory m(4,3,1);
	srand(unsigned(time_t(NULL)));
	m.drawBoard();
	system("pause");
	m.shuffleCards();
	m.drawBoard();
	system("PAUSE");
}