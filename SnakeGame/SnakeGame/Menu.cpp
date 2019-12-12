#include "Menu.h"
#include <iostream>

using namespace std;


Menu::Menu() {
	cout << R"(                                                                                                      )" << endl;
	cout << R"(     _______..__   __.      ___       __  ___  _______      _______      ___      .___  ___.  _______ )" << endl;
	cout << R"(    /       ||  \ |  |     /   \     |  |/  / |   ____|    /  _____|    /   \     |   \/   | |   ____|)" << endl;
	cout << R"(   |   (----`|   \|  |    /  ^  \    |  '  /  |  |__      |  |  __     /  ^  \    |  \  /  | |  |__   )" << endl;
	cout << R"(    \   \    |  . `  |   /  /_\  \   |    <   |   __|     |  | |_ |   /  /_\  \   |  |\/|  | |   __|  )" << endl;
	cout << R"(.----)   |   |  |\   |  /  _____  \  |  .  \  |  |____    |  |__| |  /  _____  \  |  |  |  | |  |____ )" << endl;
	cout << R"(|_______/    |__| \__| /__/     \__\ |__|\__\ |_______|    \______| /__/     \__\ |__|  |__| |_______|)" << endl;
	cout << R"(                                                                                                      )" << endl;
	cout << "Hello!! Player welcome to Snake." << endl;
	cout << "DIRECTION: " << endl;
	cout << "When you start the game you will use the A,S,W,D keys." << endl;
	cout << "A == Left" << endl;
	cout << "S == Down" << endl;
	cout << "W == UP" << endl;
	cout << "D == Right" << endl;
	cout << "" << endl;
	cout << "If you eat yourself you will die!!!!" << endl;
	cout << "If you hit the wall you die!!!!" << endl;
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
		cin.clear();
		cin.ignore();
		return choice;

	case 1:
		prompt = "Play Again?\n1 - Another One\n99 Exit Application\n\nInput: ";
		choice = inputHandler->GetUserInput(prompt);
		cin.clear();
		cin.ignore();
		return choice;

	default:
		return "99";
	}
}

Menu::~Menu() {

}
