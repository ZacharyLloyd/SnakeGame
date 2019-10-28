#pragma once
#include "Gameloop.h"


class GameLoop
{
public:
	void CreatedGameLoop();

	void Setup();

	void Draw();

	//Is Game Over Yes or No
	bool gameOver;
	//Width of the Board
	const int WIDTH = 21;
	//Length of the board
	const int LENGTH = 21;

	//Coordinates
	int x, y;

	//Fruit Coordinates
	int fruitX, fruitY;

	//Score
	int score;

private: 

protected:
	
};