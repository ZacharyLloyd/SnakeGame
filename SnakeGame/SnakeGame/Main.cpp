#include <iostream>
#include <string>
#include "Gameloop.h"
#include "Menu.h"
#include "Snake.h"

using namespace std;

GameLoop gameloop;
Menu menu;

int main()
{
	bool running = true;
	//The main game.
	do {

		if (menu.DisplayChoices(0) == "1") {
			cin.clear();
			cin.ignore();
			if (!gameloop.gameOver)
				gameloop.Update();

			cout << "You scored with: " << gameloop.score << endl;
		}
		
		else if (menu.DisplayChoices(1) == "1") {
			cin.clear();
			cin.ignore();
			gameloop.gameOver = false;
			running = true;
			continue;
		}
		else {

			running = false;
			menu.~Menu();
		}

	} while (running == true);
	return 0;
}