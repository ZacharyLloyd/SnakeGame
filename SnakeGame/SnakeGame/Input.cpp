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
		case 'a':
			mainGame->Logic(Direction::LEFT);
			break;
		case 'd':
			mainGame->Logic(Direction::RIGHT);
			break;
		case 'w':
			mainGame->Logic(Direction::UP);
			break;
		case 's':
			mainGame->Logic(Direction::DOWN);
			break;
		//case 'x':
		//	mainGame->gameOver = true;
		//	break;
		}
	}
}

Input::~Input() {
	cout << "Input Class Destroyed!!!";
}