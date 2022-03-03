#include<iostream>
using namespace std;

#include "Header.h"
int main() {
	char board[NUM_ROWS][NUM_COLS];
	initializeBoard(board);
	printBoard(board);
}