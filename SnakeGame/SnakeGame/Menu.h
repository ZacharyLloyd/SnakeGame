#pragma once
#include "Input.h"
#include <string>

class Menu
{
public: 
	//At the start of the program, create a menu
	Menu();
	std::string DisplayChoices(int _index);
	~Menu();
	
private: 
	int choice = 0;
	class Input* inputHandler = nullptr;

protected:
	
};