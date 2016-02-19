#pragma once
#include <string>

namespace General
{

class Player
{
public:
	Player();

	std::string name;

	virtual void MakeMove()=0;

	~Player();
private:
	Player(const Player& that);
	Player& operator = (const Player& that);
};
}

