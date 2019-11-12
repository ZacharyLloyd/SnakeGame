#include <iostream>
#include "Gameloop.h"
#include <chrono>
#include <ctime>
#include <windows.h>

using namespace std;

//The value used to refresh the console

//Setting Frame Per-second times

const int FPS = 300;

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

		//Clear system

		system("CLS");

		inputHandler->MOVE();

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
	gameOver = false;
	x = WIDTH / 2;
	y = LENGTH / 2;
	fruitX = rand() % WIDTH;
	fruitY = rand() % LENGTH;
	score = 0;
	Draw();
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


//void GameLoop::WipeConsole() {
//	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD coord = { 0, 0 };
//	DWORD count;
//	CONSOLE_SCREEN_BUFFER_INFO csbi;
//
//	if (GetConsoleScreenBufferInfo(hStdOut, &csbi)) {
//		FillConsoleOutputCharacter(hStdOut, (TCHAR)31, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
//		FillConsoleOutputCharacter(hStdOut, csbi.wAttributes, csbi.dwSize.X - 1 * csbi.dwSize.Y - 1, coord, &count);
//		SetConsoleCursorPosition(hStdOut, coord);
//	}
//		
//}