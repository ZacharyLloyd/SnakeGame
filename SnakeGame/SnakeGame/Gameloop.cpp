#include "Gameloop.h"
#include <iostream>

using namespace std;

void GameLoop::CreatedGameLoop()
{
	cout << "The game loop was created as an object." << endl;
}

void GameLoop::Draw() {
	for (int i = 0; i < WIDTH; i++)
		cout << "#";
	cout << endl;

	for (int i = 0; i < LENGTH; i++)
	{
		for (int j = 0; j < WIDTH; j++)
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

void GameLoop::Setup() {
	gameOver = false;
	system("pause");
	Draw();
}