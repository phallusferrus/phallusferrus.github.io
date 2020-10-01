#include<stdio.h>
#include<stdlib.h>

int theBoard[10];
int playerToken;
void playerturn();
void computerturn();


int didWin()
{
	if (theBoard[0] == theBoard[1] && theBoard[0] == theBoard[2] && theBoard[0] != 0) {
		printf("GAME OVER");
		if (theBoard[0] == playerToken) {		
			return(1);
		}
		else {
			return(2);
		}
	} else if (theBoard[3] == theBoard[4] && theBoard[3] == theBoard[5] && theBoard[3] != 0) {
		printf("GAME OVER");
		if (theBoard[3] == playerToken) {
			return(1);
		}
		else {
			return(2);
		}
	} else if (theBoard[6] == theBoard[7] && theBoard[6] == theBoard[8] && theBoard[6] != 0) {
		printf("GAME OVER");
		if (theBoard[6] == playerToken) {
			return(1);
		}
		else {
			return(2);
		}
	} else if (theBoard[0] == theBoard[3] && theBoard[0] == theBoard[6] && theBoard[0] != 0) {
		printf("GAME OVER");
		if (theBoard[0] == playerToken) {
			return(1);
		}
		else {
			return(2);
		}
	} else if (theBoard[1] == theBoard[4] && theBoard[1] == theBoard[7] && theBoard[1] != 0) {
		printf("GAME OVER");
		if (theBoard[1] == playerToken) {
			return(1);
		}
		else {
			return(2);
		}
	} else if (theBoard[2] == theBoard[5] && theBoard[2] == theBoard[8] && theBoard[2] != 0) {
		printf("GAME OVER");
		if (theBoard[2] == playerToken) {
			return(1);
		}
		else {
			return(2);
		}
	} else if (theBoard[0] == theBoard[4] && theBoard[0] == theBoard[8] && theBoard[0] != 0) {
		printf("GAME OVER");
		if (theBoard[0] == playerToken) {
			return(1);
		}
		else {
			return(2);
		}
	} else if (theBoard[2] == theBoard[4] && theBoard[2] == theBoard[6] && theBoard[2] != 0) {
		printf("GAME OVER");
		if (theBoard[2] == playerToken) {
			return(1);
		}
		else {
			return(2);
		}
	}
	else {
		return(0);
	}
}

void drawboard()
{
	int i;
	printf("\n");
	for (i=0; i<9; i++) {
		if (theBoard[i] == 0) {
		printf("%d",i+1);
		} else if (theBoard[i] == 1) {
		printf("X");
		} else if (theBoard[i] == 2) {
		printf("O");
		}
		if (i == 2 || i == 5) {
			printf("\n-----\n");
		} else if (i == 8) {
			printf("\n\n");
		} else {
			printf("|");
		}	
	}
}

void computerturn()
{
	drawboard();
	int comptoken;
	if (playerToken == 1) {
		comptoken = 2;
	} else {
		comptoken = 1;
	}
	printf("The computer will choose a move either at random or perfect play\n");
	if (theBoard[4] == 0) {
		theBoard[4] = comptoken;
	} else if (theBoard[0] == theBoard[1] && theBoard[2] == 0) {
		theBoard[2] = comptoken;
	} else if (theBoard[0] == theBoard[2] && theBoard[1] == 0) {
		theBoard[1] = comptoken;
	} else if (theBoard[1] == theBoard[2] && theBoard[0] == 0) {
		theBoard[0] = comptoken;
	} else if (theBoard[0] == theBoard[3] && theBoard[6] == 0) {
		theBoard[6] = comptoken;
	} else if (theBoard[3] == theBoard[6] && theBoard[0] == 0) {
		theBoard[0] = comptoken;
	} else if (theBoard[0] == theBoard[6] && theBoard[3] == 0) {
		theBoard[3] = comptoken;
	} else if (theBoard[0] == theBoard[4] && theBoard[8] == 0) {
		theBoard[8] = comptoken;
	} else if (theBoard[4] == theBoard[8] && theBoard[0] == 0) {
		theBoard[0] = comptoken;
	} else if (theBoard[3] == theBoard[4] && theBoard[5] == 0) {
		theBoard[5] = comptoken;
	} else if (theBoard[4] == theBoard[5] && theBoard[3] == 0) {
		theBoard[3] = comptoken;
	} else if (theBoard[1] == theBoard[4] && theBoard[7] == 0) { 
		theBoard[7] = comptoken;
	} else if (theBoard[4] == theBoard[7] && theBoard[4] == 0) {
		theBoard[4] = comptoken;
	} else if (theBoard[2] == theBoard[5] && theBoard[8] == 0) {
		theBoard[8] = comptoken;
	} else if (theBoard[2] == theBoard[8] && theBoard[5] == 0) {
		theBoard[5] = comptoken;
	} else if (theBoard[5] == theBoard[8] && theBoard[2] == 0) {
		theBoard[2] = comptoken;
	} else if (theBoard[6] == theBoard[7] && theBoard[8] == 0) {
		theBoard[8] = comptoken;
	} else if (theBoard[6] == theBoard[8] && theBoard[7] == 0) {
		theBoard[7] = comptoken;
	} else if (theBoard[7] == theBoard[8] && theBoard[6] == 0) { 
		theBoard[6] = comptoken;
	} else if (theBoard[2] == 0) {
		theBoard[2] = comptoken;
	} else if (theBoard[0] == 0) {
		theBoard[0] = comptoken;
	} else if (theBoard[6] == 0) {
		theBoard[6] = comptoken;
	} else if (theBoard[8] == 0) {
		theBoard[8] = comptoken;
	} else if (theBoard[1] == 0) {
		theBoard[1] = comptoken;
	} else if (theBoard[3] == 0) {
		theBoard[3] = comptoken;
	} else if (theBoard[5] == 0) {
		theBoard[5] = comptoken;
	} else if (theBoard[7] == 0) {
		theBoard[7] = comptoken;
	} else {
		printf("COMPUTER CANT FIND A GOOD MOVE!\n");
	}
	playerturn();
}

void playerturn()
{
	drawboard();
	int gamewon;
	if (theBoard[0] != 0 && theBoard[1] != 0 && theBoard[2] != 0 && theBoard[3] != 0 && theBoard[4] != 0 && theBoard[5] != 0 && theBoard[6] != 0 && theBoard[7] != 0 && theBoard[8] != 0) {
		printf("CATS GAME\n");
		return;
	}
	gamewon = didWin();
	if (gamewon == 1) {
		drawboard();
		printf("\nYOU WIN\n");
		return;
	} else if (gamewon == 2) {
		drawboard();
		printf("\nYOU LOOSE\n");
		return;
	}
	int playerMove;
	printf("Please make a move\n");
	scanf("%d", &playerMove);
	playerMove = playerMove - 1;
	if (playerMove < 10) {
		if (theBoard[playerMove] == 0) {
			theBoard[playerMove] = playerToken;
		} else {
			printf("BAD INPUT\n");
			playerturn();
		}
	}
	else {
		printf("BAD INPUT\n");
		playerturn();
	}
	if (theBoard[0] != 0 && theBoard[1] != 0 && theBoard[2] != 0 && theBoard[3] != 0 && theBoard[4] != 0 && theBoard[5] != 0 && theBoard[6] != 0 && theBoard[7] != 0 && theBoard[8] != 0) {
		printf("CATS GAME\n");
		return;
	}
	gamewon = didWin();
	if (gamewon == 1) {
		drawboard();
		printf("\nYOU WIN\n");
		return;
	} else if (gamewon == 2) {
		drawboard();
		printf("\nYOU LOOSE\n");
		return;
	}
	computerturn();
}

void start()
{
	int i;
	for (i = 0; i < 10; i++) {
		theBoard[i] = 0;
	}
	char player[2];
	char playerx[1] = "x";
	char playero[1] = "o";
	printf("PLEASE PICK [x] or [o]\n	:");
	fgets(player, 20, stdin);
	printf("YOU CHOSE %c - X GOES FIRST\n\n", player[0]);
	if (player[0] == playerx[0]) {
		playerToken = 1;
		playerturn();
	}
	else if (player[0] == playero[0]) {
		playerToken = 2;
		computerturn();
	}
	else {
	printf("WRONG INPUT!\n");
	start();
	}
}

int main()
{
	printf("WELCOME TO TIC TAC TOE!\n");
	start();
	printf("THANKS FOR PLAYING :)\n");
	return 0;
}
