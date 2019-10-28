#pragma once

#ifndef INPUT_H
#define INPUT_H

class Input {
public:
	Input();
	enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
	void MOVE(Direction direction);
	~Input();

private:
	//Something
};

#endif