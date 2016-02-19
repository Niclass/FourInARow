#pragma once
#include <iostream>

namespace General
{

class Board
{
public:
	Board(int col, int row);
	int col, row;
	char** board;

	void CheckWhoWin();
	void CheckBoardFull();
	void CheckPlayer();
	void CheckWhereToPlace();
	void Initialize();



	~Board();
private:
	Board(const Board& that);
	Board& operator = (const Board& that);
};
}

