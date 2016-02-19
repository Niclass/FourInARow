#pragma once
#include <iostream>
namespace GUI
{

class Browser
{
public:
	Browser();
	void HowToPlay();
	void About();
	~Browser();
private:
	Browser(const Browser& that);
	Browser& operator = (const Browser& that);
};
}

