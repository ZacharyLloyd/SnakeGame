#include <iostream>
#include "Gameloop.h"
#include <chrono>
#include <random>
#include <ctime>
#include <vector>
#define NOMINMAX
#define WIN64_LEAN_AND_MEAN
#include <windows.h>

using namespace std;

//The value used to refresh the console

//Setting Frame Per-second times

const int FPS = 600;
std::vector<Snake> snakeSegment;

//This is the game loop 
GameLoop::GameLoop()
{
	//As GameLoop is being created, 
	//create new input, reference our snake
	//and make sure the main game is equal
	//to this instance.
	inputHandler = new Input();
	snake = new Snake();
	menu = new Menu();
	inputHandler->mainGame = this;
	

}
//We made the game loop into a object to keep it easy and simple.
void GameLoop::Run()
{
	bool running = true;
	//The main game.
	do {

		if ((gameOver) ? menu->DisplayChoices(1) == "1" : menu->DisplayChoices(0) == "1") {
			menu->~Menu();
			gameOver = false;
			score = 0;
			snake->length = score;
			SpawnNewFruit();
			if (!gameOver)
				Update();

			cout << "You scored with: " << score << endl;
			
		}
		else {
			running = false;
		}
	} while (running == true);
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
		if ((snake->x == -1 || snake->x == WIDTH) || (snake->y == -1 || snake->y == LENGTH)) {
			SetToGameOver();
			break;
		}

		//Check if we got a fruit
		if (snake->x == fruitX && snake->y == fruitY)
		{
			score++;
			snake->length = score;
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

				else if (i == snake->y && j == snake->x) {
					snake->CreateSnake();
				}

				else if (i == fruitY && j == fruitX)
					cout << "F";

				else {
					bool print = false;
					
					//Tail growing (supposedly)
					for (int k = 0; k < snake->length; k++) {
						if (snake->tailX[k] == j && snake->tailY[k] == i) {
							cout << "O";
							print = true;
						}
					}

					if(!print)
						cout << " ";
				}

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
	snake->x = WIDTH / 2;
	snake->y = LENGTH / 2;
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
#pragma region Moving all tails

	int previousX = snake->tailX[0];
	int previousY = snake->tailY[0];

	int prev2X = 0;
	int prev2Y = 0;

	snake->tailX[0] = snake->x;
	snake->tailY[0] = snake->y;

	for (int i = 1; i < snake->length; i++) {
		prev2X = snake->tailX[i];
		prev2Y = snake->tailY[i];
		snake->tailX[i] = previousX;
		snake->tailY[i] = previousY;
		previousX = prev2X;
		previousY = prev2Y;
	}
#pragma endregion

#pragma region Moving the Head
	switch (dir) {
		//Left direction
	case Direction::LEFT:
		snake->x--;
		break;

		//Right Direction
	case Direction::RIGHT:
		snake->x++;
		break;

		//Moving UP 
	case Direction::UP:
		snake->y--;
		break;

		//Moving downword
	case Direction::DOWN:
		snake->y++;
		break;
	default:
		break;
	}
#pragma endregion
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

void GameLoop::SetToGameOver() {
	gameOver = true;
	system("cls");
	menu = new Menu();
	system("cls");
}