#pragma once
#include "Player.h"
#include "Client.h"
namespace General
{

class RemotePlayer : public Player
{
public:
	RemotePlayer(std::string IPAdress, int port);
	Network::Client *aClient;
	void MakeMove() override;
	~RemotePlayer();
private:
	RemotePlayer(const RemotePlayer& that);
	RemotePlayer& operator = (const RemotePlayer& that);
};
}

