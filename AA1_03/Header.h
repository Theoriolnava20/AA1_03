#include <stdlib.h>

#define NUM_ROWS 10
#define NUM_COLS 10
char stone = 'S';
char coin = 'O';
char pj = 'P';
char empty = ' ';
char board[NUM_ROWS][NUM_COLS];
int maxStones = (NUM_ROWS * NUM_COLS) * 0.2;
int maxCoins = (NUM_ROWS * NUM_COLS) * 0.3;
int numberStones;
int numberCoins;


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
	
	const int maxStones = (NUM_ROWS * NUM_COLS) * 0.2;
	const int maxCoins = (NUM_ROWS * NUM_COLS) * 0.3;
	//NUMBER OF COINS && STONES
	numberStones = random(1,maxstones);
	numberCoins = random(1, maxcoins);
	//Position
	int randomX = random(0, NUM_ROWS * NUM_COLS);
	int randomY = random(0, NUM_ROWS * NUM_COLS);
	board[randomX][randomY] = pj;
	player.position[0] = randomX;
	player.position[1] = randomY;
	//FILL ARRAY
	int counterCoins = 0;
	int counterStones = 0;
	while (counterStones <= numberStones)
	{
		for (int i = 0; i <= NUM_COLS * NUM_COLS; i++)
		{
			randomX = random(0, NUM_ROWS * NUM_COLS);
			randomY = random(0, NUM_ROWS * NUM_COLS);
			if (board[randomx][randomy] != coin && board[randomx][randomy] != stone && board[randomx][randomy] != pj) {
				board[randomx][randomy] = stone;
				counterStones++;
			}
		}
	}
	while (counterCoins <= numbercoins)
	{
		for (int j = 0; j <= NUM_COLS * NUM_COLS; j++)
		{
			randomX = random(0, NUM_ROWS * NUM_COLS);
			randomY = random(0, NUM_ROWS * NUM_COLS);
			if (board[randomX][randomY] != coin && board[randomX][randomY] != stone && board[randomX][randomY] != pj) {
				board[randomX][randomY] = coin;
				counterCoins++;
			}
		}
	}
	for (int counterY = 0; counterY < NUM_COLS; counterY++) {
		for (int counterX = 0; counterX < NUM_ROWS; counterX++) {
			if (board[counterX][counterY] != coin && board[counterX][counterY] != stone && board[counterX][counterY] != pj)
				board[counterX][counterY] = empty;
		}
	}
}

bool checkMovement(Player player, Movement move) {
	if (move == Movement::UP) {
		if (player.position[1] == 0)
			return false;
		else
			return true;
	}
	else if(move == Movement::DOWN) {
		if (player.position[1] == 9)
			return false;
		else
			return true;

	}
	if (move == Movement::LEFT) {
		if (player.position[0] == 0)
			return false;
		else
			return true;
	}
	else if (move == Movement::RIGHT) {
		if (player.position[0] == 9)
			return false;
		else
			return true;
	}
}

void addscore(Player player, char board[NUM_ROWS][NUM_COLS]) {
	while (player.score <= maxcoins)
	{
		if (board[player.position[0]][player.position[1]] == coin) {
			player.score++;
			board[player.position[0]][player.position[1]] ==' ')
		}
	}
}

void setPos(){

}

bool existsCoin(Player player, Movement move, char board[NUM_ROWS][NUM_COLS]) {
	bool possibleMove=
	if (move == Movement::UP) {
		
	}
	else if (move == Movement::DOWN) {
		
	}
	else if (move == Movement::LEFT) {
		
	}
	else if (move == Movement::RIGHT) {
		
			
	}
}

void gameOver() {
	if (countercoins == 0) {
		cout << "Game over\n" << "Your score is " << player.score;
	}
}