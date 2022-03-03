#include <stdlib.h>

#define NUM_ROWS 10
#define NUM_COLS 10
char stone = 'S';
char coin = 'O';
char pj = 'P';
int board[NUM_COLS][NUM_ROWS];
int maxstones = (NUM_COLS * NUM_COLS) * 0.2;
int maxcoins = (NUM_COLS * NUM_COLS) * 0.3;
enum class Movement {
	UP,
	DOWN,
	LEFT,
	RIGHT
};

struct Player {
	int score;
	int position[5][5];//position[0] sera la X i position[1] sera la Y
	
};
Player player;

int random(int nMin, int nMax)
{
	return rand() % (nMax - nMin + 1) + nMin;
}

void initializeBoard() {
	
	//NUMBER OF COINS && STONES
	int numberstones = random(1,maxstones);
	int numbercoins = random(1, maxcoins);
	//Position
	int randomx = random(0,NUM_COLS * NUM_COLS);
	int randomy = random(0,NUM_COLS * NUM_COLS);
	player.position[randomx][randomy] = pj;
	//FILL ARRAY
	int countercoins = 0;
	int counterstones = 0;
	while (counterstones <= numberstones)
	{
		for (int i = 0; i <= NUM_COLS * NUM_COLS; )
		{
			if (board[randomx][randomy] != coin && board[randomx][randomy] != stone && board[randomx][randomy] != pj) {
				board[randomx][randomy] = stone;
				counterstones++;
				i++;
			}
			else i++;
		}
	}
	while (countercoins <= numbercoins)
	{
		for (int j = 0; j <= NUM_COLS * NUM_COLS;)
		{
			if (board[randomx][randomy] != coin && board[randomx][randomy] != stone && board[randomx][randomy] != pj) {
				board[randomx][randomy] = coin;
				countercoins++;
				j++;
			}
			else j++;
		}
	}
}

bool checkmovement() {

}

void addscore() {
	while (player.score <= maxcoins)
		if (/*player.position*/ == coin) {
			player.score++;
		}
}

