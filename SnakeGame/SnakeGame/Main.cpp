#include <iostream>
#include "Gameloop.h"
#include "Menu.h"
#include "Snake.h"

using namespace std;


//Is Game Over Yes or No
bool gameOver;
//Width of the Board
const int WIDTH = 21;
//Length of the board
const int LENGTH = 21;

GameLoop gameloop;
Menu menu;
Snake snake;

void setup()
{
	gameOver = false;
	system("pause");
	for (int i = 0; i < WIDTH; i++)
		cout << "#";
	cout << endl;

	for(int i = 0; i < LENGTH; i++)
	{
		for(int j = 0; j < WIDTH; j++)
		{
			if (j == 0)
				cout << "#";

				cout << " ";

			if (j == WIDTH - 1)
				cout << "#";
		}
		cout << endl;
	}
	for (int i = 0; i < WIDTH; i++)
		cout << "#";
	
}
void Draw()
{
	
}

int main()
{
	
	

	while (!gameOver)
	{
		gameloop.CreatedGameLoop();
		menu.CreatedMenu();
		snake.CreatedSnake();
		//setup();
		//Draw();
	}
	return 0;
}