#include <iostream>
#include <string>
#include "Gameloop.h"
#include "Menu.h"
#include "Snake.h"

using namespace std;

GameLoop* GameLoop::Instance = 0;

int main()
{
	
	GameLoop* gameloop = gameloop->GetInstance();
	gameloop->Run();
	return 0;
}