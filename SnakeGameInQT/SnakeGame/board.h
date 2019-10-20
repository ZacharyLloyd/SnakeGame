#ifndef BOARD_H
#define BOARD_H

#include <iostream>

using namespace std;

class Board
{
public:
    //Constructor
    Board();

    //Properties
    bool gameOver;

    //Methods
    void Setup();
    void Draw();

    //Destructor
    ~Board();

private:

    //Properties
    const int WIDTH = 21;
    const int LENGTH = 21;


};

#endif // BOARD_H
