#pragma once
class TicTacToe1
{
private:
	char board[3][3]; //Möjliga tecken ’x’, ’o’ och ’ ’.
		int xcursor, ycursor;
	int turn=0; //Turordning
	// m.m.


public:
	TicTacToe1();
	void DrawBoard();
	void MoveCursor(char c);
	void GameStatus();
	void PlayerTurn(char c);
	~TicTacToe1();

};

