#pragma once
#include <iostream>
#include <string>
#include <random>
#include <ctime>
using namespace std;
namespace GUI
{

class Settings
{
public:
	Settings();
	void PlayerName(string a, string b);
	void WhoStart(int a, int b, int rand);
	void GameType(int pvp, int pvc, int cvc, int pvrp, int cvrp);
	void Server(string ipAdress, int port);
	void Board(int row, int column, int inRowTo);
	int startGame();
	~Settings();
private:
	Settings(const Settings& that);
	Settings& operator = (const Settings& that);
};
}

