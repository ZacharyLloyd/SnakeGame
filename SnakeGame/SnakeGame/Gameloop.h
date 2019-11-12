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

	void SpawnNewFruit();

	Direction direction = Direction::RIGHT;

	void CLS();


	//Width of the Board
	const int WIDTH = 55;
	//Length of the board
	const int LENGTH = 25;

	//Coordinates
	int x = 0;
	int y = 0;

	//Fruit Coordinates
	int fruitX = 0;
	int fruitY = 0;

	//Score
	int score = 0;
	bool gameOver = false;


private:
	class Input* inputHandler = nullptr;
	class Snake* snake = nullptr;

protected:

};