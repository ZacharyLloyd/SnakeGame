#include "gameloop.h"
#include "board.h"

gameloop::gameloop()
{

}
void gameloop::Initiate(){
    Board * gameBoard = new Board();

    gameBoard->Setup();

    while(!gameBoard->gameOver){
        gameBoard->Setup();
        gameBoard->Draw();
    }

    gameBoard->~Board();

}
