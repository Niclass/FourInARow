#include "MainWindow.h"


GUI::MainWindow::MainWindow()
{
}
int GUI::MainWindow::waitForCommand()
{
	std::cout << "1. Play Game" << std::endl;
	std::cout << "2. About" << std::endl;
	std::cout << "3. Quit Game" << std::endl;

	int choice = 0;

	while (choice==0)
	{
		std::cin >> choice;

		if (choice == 1 || choice == 2 || choice == 3)
			return choice;
		else
		{
			std::cout << "Du har skrivit fel! try again!"<< std::endl;
			choice = 0;
		}

	}
	return 0;
}

bool GUI::MainWindow::Play()
{
	return waitForCommand() == 1;
}

bool GUI::MainWindow::Help()
{
	return waitForCommand() == 2;
}

bool GUI::MainWindow::Exit()
{
	return waitForCommand() == 3;
}


GUI::MainWindow::~MainWindow()
{
}
