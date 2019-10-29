#include "Gameloop.h"
#include "Input.h"
#include "Main.cpp"
#include <iostream>

using namespace std;

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
				cout << "O";
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

void GameLoop::Setup() {
	gameOver = false;
	input.direction = input.STOP;
	x = WIDTH / 2;
	y = LENGTH / 2;
	fruitX = rand() % WIDTH;
	fruitY = rand() % LENGTH;
	score = 0;
	system("pause");
	Draw();
}

void GameLoop::Logic() {
	switch (input.direction) {
	case Input::Direction::LEFT:
		x--;
		break;
	case Input::Direction::RIGHT:
		x++;
		break;
	case Input::Direction::UP:
		y--;
		break;
	case Input::Direction::DOWN:
		y++;
		break;
	default:
		break;
	}
}