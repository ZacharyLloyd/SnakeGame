#include <QCoreApplication>
#include "board.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Board * gameBoard = new Board();

    gameBoard->Setup();

    while(!gameBoard->gameOver){
        gameBoard->Setup();
        gameBoard->Draw();
    }

    gameBoard->~Board();

    return a.exec();
}
