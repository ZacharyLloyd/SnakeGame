#include <iostream>
#include "Gameloop.h"
#include <chrono>

using namespace std;

GameLoop::GameLoop()
{
	inputHandler = new Input();
	snake = new Snake();
	inputHandler->mainGame = this;
	gameOver = false;
}

void GameLoop::CreatedGameLoop()
{
	cout << "The game loop was created as an object." << endl;
}

void GameLoop::Draw() {
	for (int i = 0; i < WIDTH; i++)
		cout << "#";
	cout << endl;

	for (int i = 0; i < LENGTH; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			if (j == 0)
				cout << "#";
			if (i == y && j == x)
				snake->CreateSnake();
			else if (i == fruitY && j == fruitX)
				cout << "F";
			else
				cout << " ";

			if (j == WIDTH - 1)
				cout << "#";
		}
		cout << endl;
	}
	for (int i = 0; i < WIDTH; i++)
		cout << "#";
}

void GameLoop::Update() {
	gameOver = false;
	Direction::STOP;
	x = WIDTH / 2;
	y = LENGTH / 2;
	fruitX = rand() % WIDTH;
	fruitY = rand() % LENGTH;
	score = 0;
	Draw();
}

void GameLoop::Logic(Direction dir) {
	switch (dir) {
	case Direction::LEFT:
		x--;
		break;
	case Direction::RIGHT:
		x++;
		break;
	case Direction::UP:
		y--;
		break;
	case Direction::DOWN:
		y++;
		break;
	default:
		break;
	}
}