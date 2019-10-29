#pragma once

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

class Main {
public:
	int main();
private:

protected:

};