#pragma once
#include "Settings.h"
namespace GUI
{

class SettingsWindow 
{
public:
	SettingsWindow(GUI::Settings* settings);
	GUI::Settings *aSettings;
	void ShowSettings();
	~SettingsWindow();
private:
	SettingsWindow(const SettingsWindow& that);
	SettingsWindow& operator = (const SettingsWindow& that);
};
}

