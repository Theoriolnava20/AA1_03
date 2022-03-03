#include <stdlib.h>

#define NUM_ROWS 10
#define NUM_COLS 10
char stone = 'S';
char coin = 'O';
char pj = 'P';
int board[NUM_COLS][NUM_ROWS];

enum class Movement {
	UP,
	DOWN,
	LEFT,
	RIGHT
};

struct Player {
	int score;
	int position[2];//position[0] sera la X i position[1] sera la Y
};
Player player;

int random(int nMin, int nMax)
{
	return rand() % (nMax - nMin + 1) + nMin;
}

void initializeBoard() {
	const int maxstones = (NUM_COLS * NUM_COLS) * 0.2;
	const int maxcoins = (NUM_COLS * NUM_COLS) * 0.3;
	//NUMBER OF COINS && STONES
	int numberstones = random(1,maxstones);
	int numbercoins = random(1, maxcoins);
	//Position
	player.position[0] = randomx;
	player.position[1] = randomy;
	//FILL ARRAY
	int countercoins = 0;
	int counterstones = 0;
	while (counterstones <= numberstones)
	{
		for (int i = 0; i <= NUM_COLS * NUM_COLS; i++)
		{
			int randomx = random(0, NUM_COLS * NUM_COLS);
			int randomy = random(0, NUM_COLS * NUM_COLS);
			if (board[randomx][randomy] != coin && board[randomx][randomy] != stone && board[randomx][randomy] != pj) {
				board[randomx][randomy] = stone;
				counterstones++;
			}
		}
	}
	while (countercoins <= numbercoins)
	{
		for (int j = 0; j <= NUM_COLS * NUM_COLS; j++;)
		{
			int randomx = random(0, NUM_COLS * NUM_COLS);
			int randomy = random(0, NUM_COLS * NUM_COLS);
			if (board[randomx][randomy] != coin && board[randomx][randomy] != stone && board[randomx][randomy] != pj) {
				board[randomx][randomy] = coin;
				countercoins++;
			}
		}
	}
}



