#ifndef INPUT_H
#define INPUT_H

#include "Gameloop.h"
#include "Direction.h"

//extern Direction direction;



class Input {
public:
	// constructor
	Input();
	// deconstructor
	~Input();

	void MOVE();

	class GameLoop* mainGame;
//private:
	//Something
};

#endif
