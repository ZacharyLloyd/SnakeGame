#pragma once

#include "Input.h"
#include "Direction.h"
#include "Snake.h"

class GameLoop
{
public:
	// Constructor
	GameLoop();

	void CreatedGameLoop();

	void Update();

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
	bool gameOver = false;


private: 
	class Input* inputHandler;
	class Snake* snake;

protected:
	
};