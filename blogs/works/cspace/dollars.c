#include<stdio.h>
#include<time.h>

# define MU 1
# define ML 2
# define MD 3
# define MR 4

char gamezero[12] = "|--------|";
int gameone[7];
int gametwo[7];
int gamethree[7];
int gamefour[7];
int gamefive[7];
int gamesix[7];
int gameseven[7];
void getMove();
void dollarLoop();

void initBoard()
{
	int i;
	for (i = 0; i < 8; i++) {
		gameone[i] = 0;
		gametwo[i] = 0;
		gamethree[i] = 0;
		gamefour[i] = 0;
		gamefive[i] = 0;
		gamesix[i] = 0;
		gameseven[i] = 0;
	}
	gamethree[3] = 1;
	printf("Game INIT\n");
}

void drawBoard(){
	int i;
	for (i = 0; i < 13; i++) {
		printf("%c", gamezero[i]);
	}
	printf("\n|");
	for (i = 0; i < 8; i++) {
		if (gameone[i] == 1) {
			printf("$");
		} else {
			printf(" ");
		}
	}
	printf("|\n|");
	for (i = 0; i < 8; i++) {
		if (gametwo[i] == 1) {
			printf("$");
		} else {
			printf(" ");
		}
	}
	printf("|\n|");
	for (i = 0; i < 8; i++) {
		if (gamethree[i] == 1) {
			printf("$");
		} else {
			printf(" ");
		}
	}
	printf("|\n|");
	for (i = 0; i < 8; i++) {
		if (gamefour[i] == 1) {
			printf("$");
		} else {
			printf(" ");
		}
	}
	printf("|\n|");
	for (i = 0; i < 8; i++) {
		if (gamefive[i] == 1) {
			printf("$");
		} else {
			printf(" ");
		}
	}
	printf("|\n|");
	for (i = 0; i < 8; i++) {
		if (gamesix[i] == 1) {
			printf("$");
		} else {
			printf(" ");
		}
	}
	printf("|\n|");
	for (i = 0; i < 8; i++) {
		if (gameseven[i] == 1) {
			printf("$");
		} else {
			printf(" ");
		}
	}
	printf("|\n");
	for (i = 0; i < 13; i++) {
		printf("%c", gamezero[i]);
	}
	printf("\n\n");
}


void boardMove(int dir)
{
	int i;
	if  (dir == 1) {
		for (i = 0; i < 8; i++) {
			if (gameone[i] == 1) {
				printf("ERROR BAD MOVE!\n");
				getMove();
			}
		}
		for (i = 0; i < 8; i++) {
			if (gametwo[i] == 1) {
				gameone[i] = 1;
				gametwo[i] = 0;
				dollarLoop();
			}
		}
		for (i = 0; i < 8; i++) {
			if (gamethree[i] == 1) {
				gametwo[i] = 1;
				gamethree[i] = 0;
				dollarLoop();
			}
		}
		for (i = 0; i < 8; i++) {
			if (gamefour[i] == 1) {
				gamethree[i] = 1;
				gamefour[i] = 0;
				dollarLoop();
			}
		}
		for (i = 0; i < 8; i++) {
			if (gamefive[i] == 1) {
				gamefour[i] = 1;
				gamefive[i] = 0;
				dollarLoop();
			}
		}
		for (i = 0; i < 8; i++) {
			if (gamesix[i] == 1) {
				gamefive[i] = 1;
				gamesix[i] = 0;
				dollarLoop();
			}
		}
		for (i = 0; i < 8; i++) {
			if (gameseven[i] == 1) {
				gamesix[i] = 1;
				gameseven[i] = 0;
				dollarLoop();
			}
		}
	} else if  (dir == 3) {
		for (i = 0; i < 8; i++) {
			if (gameseven[i] == 1) {
				printf("ERROR BAD MOVE!\n");
				getMove();
			}
		}
		for (i = 0; i < 8; i++) {
			if (gameone[i] == 1) {
				gametwo[i] = 1;
				gameone[i] = 0;
				dollarLoop();
			}
		}
		for (i = 0; i < 8; i++) {
			if (gametwo[i] == 1) {
				gamethree[i] = 1;
				gametwo[i] = 0;
				dollarLoop();
			}
		}
		for (i = 0; i < 8; i++) {
			if (gamethree[i] == 1) {
				gamefour[i] = 1;
				gamethree[i] = 0;
				dollarLoop();
			}
		}
		for (i = 0; i < 8; i++) {
			if (gamefour[i] == 1) {
				gamefive[i] = 1;
				gamefour[i] = 0;
				dollarLoop();
			}
		}
		for (i = 0; i < 8; i++) {
			if (gamefive[i] == 1) {
				gamesix[i] = 1;
				gamefive[i] = 0;
				dollarLoop();
			}
		}
		for (i = 0; i < 8; i++) {
			if (gamesix[i] == 1) {
				gameseven[i] = 1;
				gamesix[i] = 0;
				dollarLoop();
			}
		}
	} else if  (dir == 2) {
		if (gameone[0] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else if (gametwo[0] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else if (gamethree[0] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else if (gamefour[0] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else if (gamefive[0] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else if (gamesix[0] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else if (gameseven[0] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else{
			for (i = 0; i < 8; i++) {
				if (gameone[i] == 1) {
					gameone[i-1] = 1;
					gameone[i] = 0;
					dollarLoop();
				}
			}
			for (i = 0; i < 8; i++) {
				if (gametwo[i] == 1) {
					gametwo[i-1] = 1;
					gametwo[i] = 0;
					dollarLoop();
				}
			}
			for (i = 0; i < 8; i++) {
				if (gamethree[i] == 1) {
					gamethree[i-1] = 1;
					gamethree[i] = 0;
					dollarLoop();
				}
			}
			for (i = 0; i < 8; i++) {
				if (gamefour[i] == 1) {
					gamefour[i-1] = 1;
					gamefour[i] = 0;
					dollarLoop();
				}
			}
			for (i = 0; i < 8; i++) {
				if (gamefive[i] == 1) {
					gamefive[i-1] = 1;
					gamefive[i] = 0;
					dollarLoop();
				}
			}
			for (i = 0; i < 8; i++) {
				if (gamesix[i] == 1) {
					gamesix[i-1] = 1;
					gamesix[i] = 0;
					dollarLoop();
				}
			}
			for (i = 0; i < 8; i++) {
				if (gameseven[i] == 1) {
					gameseven[i-1] = 1;
					gameseven[i] = 0;
					dollarLoop();
				}
			}
		}
	} else if (dir == 4) {
		if (gameone[7] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else if (gametwo[7] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else if (gamethree[7] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else if (gamefour[7] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else if (gamefive[7] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else if (gamesix[7] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else if (gameseven[7] == 1) {
			printf("BAD MOVE!\n");
			getMove();
		} else{
			for (i = 0; i < 8; i++) {
				if (gameone[i] == 1) {
					gameone[i+1] = 1;
					gameone[i] = 0;
					dollarLoop();
				}
			}
			for (i = 0; i < 8; i++) {
				if (gametwo[i] == 1) {
					gametwo[i+1] = 1;
					gametwo[i] = 0;
					dollarLoop();
				}
			}
			for (i = 0; i < 8; i++) {
				if (gamethree[i] == 1) {
					gamethree[i+1] = 1;
					gamethree[i] = 0;
					dollarLoop();
				}
			}
			for (i = 0; i < 8; i++) {
				if (gamefour[i] == 1) {
					gamefour[i+1] = 1;
					gamefour[i] = 0;
					dollarLoop();
				}
			}
			for (i = 0; i < 8; i++) {
				if (gamefive[i] == 1) {
					gamefive[i+1] = 1;
					gamefive[i] = 0;
					dollarLoop();
				}
			}
			for (i = 0; i < 8; i++) {
				if (gamesix[i] == 1) {
					gamesix[i+1] = 1;
					gamesix[i] = 0;
					dollarLoop();
				}
			}
			for (i = 0; i < 8; i++) {
				if (gameseven[i] == 1) {
					gameseven[i+1] = 1;
					gameseven[i] = 0;
					dollarLoop();
				}
			}
		}
	} else {
		printf("BIGOOF!\n");
	}
}


/*void getMove()
{
	char input[5];
	char uppies[2] = "w";
	char downies[2] = "s";
	char lefties[2] = "a";
	char righties[2] = "d";
	printf("\nPlease make a move using WASD!\n");
	fgets(input, 20, stdin);
	if (input[0] == uppies[0]) {
		boardMove(MU);
	} else if (input[0] == downies[0]) {
		boardMove(MD);
	} else if (input[0] == lefties[0]) {
		boardMove(ML);
	} else if (input[0] == righties[0]) {
		boardMove(MR);
	} else {
		printf("\nPLEASE ENTER W A S D\n");
	}
}*/

void getMove() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == 'w') {
			boardMove(MU);
		} else if (c == 'a') {
			boardMove(ML);
		} else if (c == 's') {
			boardMove(MD);
		} else if (c == 'd') {
			boardMove(MR);
		} else {
			printf("PLEASE ENTER W A S D\n");
		}
	}
}





void dollarLoop()
{
	drawBoard();
	getMove();
}

void main()
{
	int timer = 0;
	int id = 0;
	time_t seconds;
	int lr_num = 0;
	int good_input = 0;
	seconds = time(NULL);
	if (seconds % 2 == 0) {
		seconds++;
	}
	printf("UNIX TIME: %ld\n", seconds);
	while (timer < 5) {
		seconds = time(NULL);
		if (seconds % 2 == 0) {
			printf("%dTIME\n", id);
			good_input++;
			id++;
		} else {
			lr_num = id;
			timer = 6;
			id = 0;
		}
	}
	printf("%d\n", lr_num);
	while (lr_num > 10) {
		printf("%d", lr_num);
		lr_num /= (lr_num / lr_num+7) - 54/(lr_num);
	}
	if (lr_num == 0) {
		main();
	}
	printf("\nRAND: %d\n", lr_num);
	initBoard();
	dollarLoop();
}
