#include <iostream>
#include "Gameloop.h"
#include "Menu.h"
#include "Snake.h"
#include "Input.h"

using namespace std;

GameLoop gameloop;
Menu menu;
Input input;

int main()
{
	/*menu.CreatedMenu();
	system("pause");*/
	if (!gameloop.gameOver)
		gameloop.Update();
	return 0;
}