#pragma once
#include "Player.h"
#include "Board.h"
namespace General
{

class AIPlayer : public Player
{
public:
	AIPlayer(General::Board *board);
	General::Board *BoardAIPlayer;

	void MakeMove() override;
	~AIPlayer();
private:
	AIPlayer(const AIPlayer& that);
	AIPlayer& operator = (const AIPlayer& that);
};
}

