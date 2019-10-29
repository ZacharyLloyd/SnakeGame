#pragma once

class Input {
public:
	static Input * Instance;
	enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
	Direction direction;
	void MOVE();
	~Input();

private:
	//Something
};
