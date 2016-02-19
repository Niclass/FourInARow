#include "Board.h"


General::Board::Board(int col, int row)
{
	this->col = col;
	this->row = row;
}

void General::Board::Initialize()
{
	board = new char*[row];
	for (int i = 0; i < row; i++)
	{
		board[i] = new char[col];
	}
}


void  General::Board::CheckWhoWin()
{

}
void  General::Board::CheckBoardFull()
{

}
void  General::Board::CheckPlayer()
{

}

void  General::Board::CheckWhereToPlace()
{

}



General::Board::~Board()
{
}
