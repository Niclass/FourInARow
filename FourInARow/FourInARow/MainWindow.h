#pragma once
#include "Browser.h"
namespace GUI
{

class MainWindow
{
public:
	MainWindow();

	int waitForCommand();

	bool Play();
	bool Help();
	bool Exit();

	
	~MainWindow();

private:
	int choice;
	MainWindow(const MainWindow& that);
	MainWindow& operator = (const MainWindow& that);
};
}

