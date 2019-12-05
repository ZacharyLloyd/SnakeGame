#pragma once
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Snake
{
public:
	//Create the snake onto the board
	void CreateSnake();
	int x, y;
	int tailX[200], tailY[200] = { 0 };
	unsigned int length;

private: 

protected:
	
};

