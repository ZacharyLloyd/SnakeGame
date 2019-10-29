#pragma once


class GameLoop
{
public:
	

	void CreatedGameLoop();

	void Setup();

	void Draw();

	void Logic();

	//Is Game Over Yes or No
	bool gameOver;
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

private: 

protected:
	
};