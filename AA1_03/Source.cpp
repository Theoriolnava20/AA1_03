#include<iostream>
using namespace std;
#include "Header.h"

int main() {
    bool game;
    do {

        initializeBoard(board);
        existsCoin(player, move, board);
        game = gameOver();
        printBoard(board);
        if (checkMovement(player, move, board) == true) {
            movePlayer();
        }
        addscore(player, board);

    } while (game == false);
}