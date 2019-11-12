#include <iostream>
#include "Gameloop.h"
#include <chrono>
#include <random>
#include <ctime>
#define NOMINMAX
#define WIN64_LEAN_AND_MEAN
#include <windows.h>

using namespace std;

//The value used to refresh the console

//Setting Frame Per-second times

const int FPS = 600;

//This is the game loop 
GameLoop::GameLoop()
{
	//As GameLoop is being created, 
	//create new input, reference our snake
	//and make sure the main game is equal
	//to this instance.
	inputHandler = new Input();
	snake = new Snake();
	inputHandler->mainGame = this;
	gameOver = false;
	score = 0;
	SpawnNewFruit();

}
//We made the game loop into a object to keep it easy and simple.
void GameLoop::CreatedGameLoop()
{
	//To let us know a game loop was created
	cout << "The game loop was created as an object." << endl;

}
//This is to draw the board, snake and food, while running the frame rates altogether
void GameLoop::Draw() {

	//This for loop is a clock that
	//Handles how overtime the board will
	//redraw itself.

	for (;;) {
		clock_t start;
		double time = 0.0;
		start = clock();
		while (time < 1.0 / FPS) {
			time = (clock() - start) / (double)CLOCKS_PER_SEC;
		}

		//Clear the console
		CLS();

		inputHandler->MOVE();
		Logic(direction);

		//Check if Game Over
		if ((x == -1 || x == WIDTH+1) || (y == -1 || y == LENGTH+1)) {
			gameOver = true;
			system("cls");
			break;
		}

		//Check if we got a fruit
		if (x == fruitX && y == fruitY)
		{
			score++;
			SpawnNewFruit();
		}

		for (int i = 0; i < WIDTH; i++)
			cout << "#";
		cout << endl;

		//Food is generated a 'F'
		//Border is in '#'
		//also width and length of the board.
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
}
//This is made for so the board updates and food updates.
void GameLoop::Update() {
	x = WIDTH / 2;
	y = LENGTH / 2;
	Draw();
}

void GameLoop::SpawnNewFruit() {
	auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
	mt19937 mt_rand(seed);

	fruitX = mt_rand() % WIDTH;
	fruitY = mt_rand() % LENGTH;
}
// This is used for the user direction for the snake.
void GameLoop::Logic(Direction dir) {
	switch (dir) {
		//Left direction
	case Direction::LEFT:
		x--;
		break;
		//Right Direction
	case Direction::RIGHT:
		x++;
		break;
		//Moving UP 
	case Direction::UP:
		y--;
		break;
		//Moving downword
	case Direction::DOWN:
		y++;
		break;
	default:
		break;
	}
}
//This was orginally used for testing the board.


void GameLoop::CLS() {
	HANDLE hOut;
	COORD Position;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}