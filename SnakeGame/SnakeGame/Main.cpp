#include <iostream>
#include "Gameloop.h"
#include "Menu.h"
#include "Snake.h"

using namespace std;

GameLoop gameloop;
Menu menu;

int main()
{
	/*menu.CreatedMenu();
	system("pause");*/
	if (!gameloop.gameOver)
		gameloop.Update();
	else {
		cout << "Did that even work?" << endl;
		return 0;
	}
}