#include <iostream>
#include "Gameloop.h"
#include "Menu.h"
#include "Snake.h"
#include "Input.h"

using namespace std;

GameLoop gameloop;
Menu menu;
Snake snake;
Input input;

int main()
{
	gameloop.CreatedGameLoop();
	system("pause");
	menu.CreatedMenu();
	system("pause");
	snake.CreatedSnake();
	system("pause");
	gameloop.Setup();
	system("pause");
	return 0;
}