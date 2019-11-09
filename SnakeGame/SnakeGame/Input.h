#pragma once

#include "Gameloop.h"
#include "Direction.h"

class Input {
public:
	// constructor
	Input();

	//Moving
	void MOVE();

	//Our reference pointer to gout GameLoop
	class GameLoop * mainGame = nullptr;

	// deconstructor
	~Input();

//private:
	//Something
};
