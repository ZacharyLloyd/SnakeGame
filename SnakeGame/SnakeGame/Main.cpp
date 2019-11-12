#include <iostream>
#include "Gameloop.h"
#include "Menu.h"
#include "Snake.h"

using namespace std;

GameLoop gameloop;
Menu menu;

int main()
{
	//The main game.
	if (!gameloop.gameOver)
		gameloop.Update();

	cout << "You scored with: " << gameloop.score << endl;
	return 0;
}