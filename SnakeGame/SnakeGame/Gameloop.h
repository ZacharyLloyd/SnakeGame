#pragma once

#include "Input.h"
#include "Direction.h"
#include "Snake.h"
#include "Menu.h"

class GameLoop
{
	static GameLoop* Instance;
public:
	// Constructor
	GameLoop();

	static GameLoop* GetInstance() {
		if (!Instance) {
			Instance = new GameLoop();
			return Instance;
		}
	}

	void Run();

	void Update();

	void Draw();

	void Logic(Direction dir);

	void SpawnNewFruit();

	void SetToGameOver();

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
	class Menu* menu = nullptr;

protected:

};