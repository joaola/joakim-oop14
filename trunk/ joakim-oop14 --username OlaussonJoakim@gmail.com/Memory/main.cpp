#include "card.h"
#include "player.h"
#include "memory.h"
#include <iostream>
#include <conio.h>
#include "Console.h"
using namespace std;
void main(){
	memory m(6,6,3);
	srand(unsigned(time_t(NULL)));
	char c = NULL;
	m.shuffleCards();
	m.drawBoard();
	m.showPlayers();

	while (true){
		if (c == 'w' || c=='a' || c=='s' || c=='d' || c=='\r' || c==NULL){ //wasd eller enter
			m.moveCursor(c);
			m.flipCards(c);
			c = _getch();
		}
		else
			break;
		
	}
}