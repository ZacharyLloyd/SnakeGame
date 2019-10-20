#include "board.h"
#include <iostream>
#include <iomanip>

using namespace std;

Board::Board(){}

Board::~Board(){
    gameOver = true;
}

void Board::Setup(){
    gameOver = false;
    system("pause");
    system("CLS");
    for (int i = 0; i < WIDTH; i++)
        cout << setw(2) << "#";
    cout << endl;

    for(int i = 0; i < LENGTH; i++)
    {
        for(int j = 0; j < WIDTH; j++)
        {
            if (j == 0)
                cout << "#";

            cout << setw(2) << " ";

            if (j == WIDTH - 1)
                cout << "#";
        }
        cout << endl;
    }
    for (int i = 0; i < WIDTH; i++)
        cout << setw(2) << "#";
}

void Board::Draw(){
    //Drawing snake, food, whatever it may be.
}
