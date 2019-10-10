#include <iostream>
#include <vector>
#include <utility>


using namespace std;

//Is Game Over Yes or No
bool gameOver;
//Width of the Board
const int WIDTH = 20;
//Length of the board
const int LENGTH = 20;

void setup()
{
	gameOver = false;
	
	for (int i = 0; i < WIDTH; i++)
		cout << "#";
	cout << endl;

	for(int i = 0; i < LENGTH;)
	{
		
	}
	
}
void Draw()
{
	//system("pause");
}

int Engine()
{
	setup();
	while (!gameOver)
	{
		Draw();
	}
}