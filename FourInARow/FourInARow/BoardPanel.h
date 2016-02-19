#pragma once
namespace GUI
{

class BoardPanel
{
public:
	BoardPanel();
	~BoardPanel();
private:
	BoardPanel(const BoardPanel& that);
	BoardPanel& operator = (const BoardPanel& that);
};
}

