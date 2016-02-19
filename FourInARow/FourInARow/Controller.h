#pragma once
#include "Settings.h"
#include "Board.h"
#include"SettingsWindow.h"
#include "Player.h"	
#include "BoardPanel.h"
#include "MainWindow.h"
namespace General
{

class Controller
{
public:
	Controller();



	GUI::Settings *aSettings;
	GUI::BoardPanel *aBoardPanel;
	GUI::SettingsWindow *aSettingsWindow;
	GUI::MainWindow *aMainWindow;
	GUI::Browser *aBrowser;
	Board *aBoard;
	Player *Player1, *Player2;

	void NextTurn();

	bool EndGame();

	void HandleCommand();

	~Controller();
private:
	void EnterGameSettings();
	void PlayGame();
	void ExitGame();
	Controller(const Controller& that);
	Controller& operator = (const Controller& that);
};
}

