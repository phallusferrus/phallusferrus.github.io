#include<stdio.h>
#include<stdlib.h>

#define BOARDWIDTH 64
#define BOARDHEIGHT 32

//void alert(str) {

void printBoard() {
	int boardChar;
	boardChar=88;
	int i;
	char topLine[64];
	char midLine[64];
	for (i=0;i<BOARDWIDTH-1;i++) {
		topLine[i]=boardChar;
	}
	midLine[0]=boardChar;
	for (i=1;i<BOARDWIDTH-1;i++) {
		midLine[i]=32;
	}
	midLine[BOARDWIDTH-2]=boardChar;
	printf("%s\n",topLine);
	for (i=1;i<BOARDHEIGHT;i++) {
		printf("%s\n",midLine);
	}
	printf("%s\n",topLine);

}

 
void start() {
	printBoard();
	//alert(snake);
}


void main() {
	printf("Welcome To Snake\n");
	start();
	printf("Thanks for Playing\n");
}
