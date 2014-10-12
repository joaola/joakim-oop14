#include "card.h"
#include "player.h"
#include "memory.h""
#include <iostream>
#include <conio.h>
#include "Console.h"
using namespace std;
void main(){
	memory m(4,3,1);
	srand(unsigned(time_t(NULL)));
	char c = NULL;
	m.shuffleCards();
	cout << "tryck valfri tangent för att blanda korten.";
	system("PAUSE");
	
	while (true){
		if (c == 'w' || c=='a' || c=='s' || c=='d' || c=='\r' || c==NULL){
			m.drawBoard();
			m.moveCursor(c);
			c = _getch();
			system("CLS");
		}
		else
			break;
		
	}
}