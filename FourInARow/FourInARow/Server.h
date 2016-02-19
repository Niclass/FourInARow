#pragma once
namespace Network
{

class Server
{
public:
	Server();
	~Server();
private:
	Server(const Server& that);
	Server& operator = (const Server& that);
};
}

