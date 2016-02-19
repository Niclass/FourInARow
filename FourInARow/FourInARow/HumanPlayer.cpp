#include "HumanPlayer.h"


General::HumanPlayer::HumanPlayer(GUI::BoardPanel* boardPanel)
: Player()
{
	this->BoardPanelHumanPlayer = boardPanel;
}

void General::HumanPlayer::MakeMove()
{}

General::HumanPlayer::~HumanPlayer()
{
}
