#pragma once

#include "Input.h"
#include "Direction.h"
//Is Game Over Yes or No

#ifndef GAMELOOP_H
#define GAMELOOP_H

class GameLoop
{
public:
	// Constructor
	GameLoop();

	void CreatedGameLoop();

	void Setup();

	void Draw();

	void Logic(Direction dir);

	
	//Width of the Board
	const int WIDTH = 55;
	//Length of the board
	const int LENGTH = 25;

	//Coordinates
	int x = 0, y = 0;

	//Fruit Coordinates
	int fruitX, fruitY;

	//Score
	int score;
	bool gameOver;


private: 
	class Input* inputHandler;
protected:
	
};

#endif