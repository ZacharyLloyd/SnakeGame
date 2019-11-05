#pragma once

#include "Gameloop.h"
#include "Direction.h"

class Input {
public:
	// constructor
	Input();

	void MOVE();

	class GameLoop * mainGame = nullptr;

	// deconstructor
	~Input();

//private:
	//Something
};
