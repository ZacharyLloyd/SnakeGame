#pragma once

class Input {
public:
	enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
	Direction direction;
	void MOVE();
	~Input();

private:
	//Something
};
