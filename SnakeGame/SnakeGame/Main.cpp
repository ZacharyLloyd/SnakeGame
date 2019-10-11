#include <iostream>


using namespace std;

//Is Game Over Yes or No
bool gameOver;
//Width of the Board
const int WIDTH = 21;
//Length of the board
const int LENGTH = 21;

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
	setup();
	while (!gameOver)
	{
		setup();
		Draw();
	}
	return 0;
}