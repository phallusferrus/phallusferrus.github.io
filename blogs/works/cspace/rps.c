#include<stdio.h>
#include<stdlib.h>




void main()
{
	srand(time(0));
	int rnum;
	rnum = rand() % 3;
	printf("Rand? %d\n", rnum);
	if (rnum == 0 || rnum == 1 || rnum == 2) {
		printf("ROCK PAPER SCISSORS!\n");
	} else {
		main();
	}	
	int i;
	/* 0 count*/
	int ocount = 0;
	/* 1 count*/
	int ncount = 0;
	/* 2 count*/
	int tcount = 0;
	int ecount = 0;
	for (i = 0; i < 100; i++) {
		rnum = (rand() % 3);
		if (rnum == 0) {
			printf("0\n");
			ocount++;
		} else if (rnum == 1) {
			printf("1\n");
			ncount++;
		} else if (rnum == 2) {
			printf("2\n");
			tcount++;
		} else {
			printf("ERROROROROROROR\n");
			ecount ++;
		}
		printf("-----%d\n", i);
		printf("0:	%d\n1:	%d\n2:	%d\nE:	%d\n", ocount, ncount, tcount, ecount);
	}
	printf("0:	%d\n1:	%d\n2:	%d\nE:	%d\n", ocount, ncount, tcount, ecount);
	int players;
	printf("PICK\n1)	Rock\n2)	Paper\n3)	Scissors\n");
	scanf("%d", &players);
	printf("You Picked ");
	if (players == 1) {
		printf("Rock ");
	} else if (players == 2) {
		printf("Paper ");
	} else if (players == 3) {
		printf("Scissors ");
	} else {
		printf("players non valid!!!!!!\n");
	}
	printf("Computer Picked ");
	if (rnum == 0) {
		printf("Rock ");
	} else if (rnum == 1) {
		printf("Paper ");
	} else if (rnum == 2) {
		printf("Scissors ");
	} else {
		printf("rnum non valid!!!!!!\n");
	}
	rnum = rnum + 1;
	printf("\nPlayer: %d\nComp: %d\n", players, rnum);
	if (players == rnum) {
		printf("TIE!\n");
	} else if (players == 1 && rnum == 2) {
		printf("you looser\n");
	} else if (players == 1 && rnum == 3) {
		printf("you winner\n");
	} else if (players == 2 && rnum == 3) {
		printf("you looser\n");
	} else if (players == 2 && rnum == 1) {
		printf("you winner\n");
	} else if (players == 3 && rnum == 1) {
		printf("you looser\n");
	} else if (players == 3 && rnum == 2) {
		printf("you winner\n");
	} else {
		printf("CONIPTION!");
	}
}
