#include <iostream>
#include <conio.h>
#include <windows.h>

#include "Main.cpp"
#include "Input.h"
#include "Gameloop.h"

using namespace std;

void Input::MOVE() {
	if (_kbhit()) {
		switch (_getch()) {
		case 'a':
			direction = LEFT;
			break;
		case 'd':
			direction = RIGHT;
			break;
		case 'w':
			direction = UP;
			break;
		case 's':
			direction = DOWN;
			break;
		case 'x':
			gameloop.gameOver = true;
			break;
		}
	}
}

Input::~Input() {
	cout << "Input Class Destroyed!!!";
}