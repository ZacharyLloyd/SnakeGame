#include "Menu.h"
#include <iostream>

using namespace std;


Menu::Menu() {
	cout << "WELCOME TO THE SNAKE GAME" << endl;
	inputHandler = new Input();
}

std::string Menu::DisplayChoices(int _index)
{
	std::string prompt;
	std::string choice;
	switch (_index) {
	case 0:
		//Tell use that the menu was created
		prompt = "1 - Play Game \n99 - Exit Application\n\nInput: ";
		choice = inputHandler->GetUserInput(prompt);
		return choice;

	case 1:
		prompt = "Play Again?\n1 - Another One\n99 Exit Application\n\nInput: ";
		choice = inputHandler->GetUserInput(prompt);
		return choice;

	default:
		return "99";
	}
}

Menu::~Menu() {

}
