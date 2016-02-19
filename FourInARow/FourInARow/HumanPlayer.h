#pragma once
#include "Player.h"
#include "BoardPanel.h"
namespace General
{

class HumanPlayer : public Player
{
public:
	HumanPlayer(GUI::BoardPanel* boardPanel);
	GUI::BoardPanel *BoardPanelHumanPlayer;
	void MakeMove() override;
	~HumanPlayer();
private:
	HumanPlayer(const HumanPlayer& that);
	HumanPlayer& operator = (const HumanPlayer& that);
};
}

