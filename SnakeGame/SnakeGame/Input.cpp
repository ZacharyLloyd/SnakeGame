#include <iostream>
#include <conio.h>
#include <windows.h>

#include "Input.h"

using namespace std;
//enum Direction direction;
void Input::MOVE() {
	if (_kbhit()) {
		switch (_getch()) {
		case 'a':
			mainGame->Logic(Direction::LEFT);
			break;
		case 'd':
			Direction::RIGHT;
			break;
		case 'w':
			Direction::UP;
			break;
		case 's':
			Direction::DOWN;
			break;
		case 'x':
			mainGame->gameOver = true;
			break;
		}
	}
}

Input::Input() 
{

}

Input::~Input() {
	cout << "Input Class Destroyed!!!";
}