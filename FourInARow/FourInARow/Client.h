#pragma once
#include "Server.h"
#include <string>
namespace Network
{

class Client
{
public:
	Client();
	Server *aServer;
	std::string IP_Adress;
	void ReciveData();
	void SendData();
	~Client();
private:
	Client(const Client& that);
	Client& operator = (const Client& that);
};
}

