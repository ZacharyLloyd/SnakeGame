#include <iostream>
#include <conio.h>
#include <windows.h>

#include "Input.h"

using namespace std;


Input::Input() 
{

}

//Detects button presses,
//and send that information to the game loop
void Input::MOVE() {
	if (_kbhit()) {
		switch (_getch()) {
		case KEY_LEFT:
			mainGame->direction = Direction::LEFT;
			break;
		case KEY_RIGHT:
			mainGame->direction = Direction::RIGHT;
			break;
		case KEY_UP:
			mainGame->direction = Direction::UP;
			break;
		case KEY_DOWN:
			mainGame->direction = Direction::DOWN;
			break;
		}
	}
}

std::string Input::GetUserInput(std::string _value) {
	cout << _value;
	string response;
	response = cin.get();
	return response;
}

Input::~Input() {
	cout << "Input Class Destroyed!!!";
}