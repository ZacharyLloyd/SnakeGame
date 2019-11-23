#pragma once

#include "Gameloop.h"
#include "Direction.h"
#include <iostream>
#include <string>

#define KEY_UP 'w'
#define KEY_DOWN 's'
#define KEY_LEFT 'a'
#define KEY_RIGHT 'd'

class Input {
public:
	// constructor
	Input();

	//Moving
	void MOVE();

	//Receiving input
	std::string GetUserInput(std::string _prompt);

	//Our reference pointer to gout GameLoop
	class GameLoop * mainGame = nullptr;

	// deconstructor
	~Input();

//private:
	//Something
};
