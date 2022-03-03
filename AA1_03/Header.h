#include <stdlib.h>

#define NUM_ROWS 10
#define NUM_COLS 10
char stone = 'S';
char coin = 'O';
char pj = 'P';
char board[NUM_ROWS][NUM_COLS];
int maxstones = (NUM_ROWS * NUM_COLS) * 0.2;
int maxcoins = (NUM_ROWS * NUM_COLS) * 0.3;


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
	
	const int maxstones = (NUM_ROWS * NUM_COLS) * 0.2;
	const int maxcoins = (NUM_ROWS * NUM_COLS) * 0.3;
	//NUMBER OF COINS && STONES
	int numberstones = random(1,maxstones);
	int numbercoins = random(1, maxcoins);
	//Position
	int randomx = random(0, NUM_ROWS * NUM_COLS);
	int randomy = random(0, NUM_ROWS * NUM_COLS);
	board[randomx][randomy] = pj;
	player.position[0] = randomx;
	player.position[1] = randomy;
	//FILL ARRAY
	int countercoins = 0;
	int counterstones = 0;
	while (counterstones <= numberstones)
	{
		for (int i = 0; i <= NUM_COLS * NUM_COLS; i++)
		{
			int randomx = random(0, NUM_ROWS * NUM_COLS);
			int randomy = random(0, NUM_ROWS * NUM_COLS);
			if (board[randomx][randomy] != coin && board[randomx][randomy] != stone && board[randomx][randomy] != pj) {
				board[randomx][randomy] = stone;
				counterstones++;
			}
		}
	}
	while (countercoins <= numbercoins)
	{
		for (int j = 0; j <= NUM_COLS * NUM_COLS; j++)
		{
			int randomx = random(0, NUM_ROWS * NUM_COLS);
			int randomy = random(0, NUM_ROWS * NUM_COLS);
			if (board[randomx][randomy] != coin && board[randomx][randomy] != stone && board[randomx][randomy] != pj) {
				board[randomx][randomy] = coin;
				countercoins++;
			}
		}
	}
	for (int counterY = 0; counterY < NUM_COLS; counterY++) {
		for(int counterX=0; counterX<NUM_ROWS)
	}
}

bool checkmovement(Player player, Movement move) {
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
	if (move == Movement::UP) {
		
	}
	else if (move == Movement::DOWN) {
		
	}
	if (move == Movement::LEFT) {
		
	}
	else if (move == Movement::RIGHT) {
		if (player.position[0] == 9)
			
	}
}

