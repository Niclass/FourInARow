#include "Controller.h"


General::Controller::Controller()
{
	aBoardPanel = new GUI::BoardPanel();
	aMainWindow = new GUI::MainWindow();
	aSettings = new GUI::Settings();
	aSettingsWindow = new GUI::SettingsWindow(aSettings);
	aBrowser = new GUI::Browser;

	HandleCommand();
	
}

void General::Controller::NextTurn()
{

}

bool General::Controller::EndGame()
{
	return false;
}


void General::Controller::HandleCommand()
{
	bool running = true;

	while (running)
	{
		int command = aMainWindow->waitForCommand();

		switch (command)
		{
		case 1:
			EnterGameSettings();
			break;
		case 2:
			aBrowser->About();
			break;
		case 3:
			running = false;
			break;
		default:
			break;
		}	
	}
}

void General::Controller::EnterGameSettings()
{

}


General::Controller::~Controller()
{
	
}
