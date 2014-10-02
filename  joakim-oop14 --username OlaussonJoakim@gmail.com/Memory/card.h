#pragma once
class card
{
public:
	char front;
	int back;
	int r;
	int c;
	bool inGame;
	card();
	card(int b);
	~card();
};

