#include <iostream>
#include "Gameloop.h"
#include "Menu.h"
#include "Snake.h"

using namespace std;


//Is Game Over Yes or No
bool gameOver;
//Width of the Board
const int WIDTH = 75;
//Length of the board
const int LENGTH = 45;

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
	/*TODO
	1)Generate Food
	2)Generate Snake
	*/
}

int main()
{
	gameloop.CreatedGameLoop();
	system("pause");
	menu.CreatedMenu();
	system("pause");
	snake.CreatedSnake();
	system("pause");
	setup();
	Draw();
	system("pause");
	return 0;
}