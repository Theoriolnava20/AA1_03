#include <stdlib.h>

#define NUM_ROWS 10
#define NUM_COLS 10
char stone = 'S';
char coin = 'O';
int board[NUM_COLS][NUM_ROWS];

enum class Movement {
	UP,
	DOWN,
	LEFT,
	RIGHT
};

struct Player {
	int score;
	int positionx;//position[0] sera la X i position[1] sera la Y
	int positiony;
	int myposition;
};
Player player;
void initializeBoard() {
	int maxstones = (NUM_COLS * NUM_COLS) * 0.2;
	int coins = (NUM_COLS * NUM_COLS) * 0.3;
	//NUMBER OF COINS && STONES
	int numberstones = rand() % maxstones;
	int numbercoins = rand() % coins;
	//Position
	int randomx = rand() % NUM_COLS * NUM_COLS;
	int randomy = rand() % NUM_COLS * NUM_COLS;
	
	//FILL ARRAY
	int countercoins = 0;
	int counterstones = 0;
	while (counterstones <= numberstones)
	{
		for (int i = 0; i <= NUM_COLS * NUM_COLS; i++)
		{
			board[randomx][randomy] = stone;
			counterstones++;
		}
	}
	while (countercoins <= numbercoins)
	{
		for (int j = 0; j <= NUM_COLS * NUM_COLS; j++)
		{
			board[randomx][randomy] = coin;
			countercoins++;
		}
	}
	 //POSICION DE PJ
	player.positionx = randomx;
	player.positiony = randomy;
	player.myposition=board[player.positionx][player.positiony];
}

