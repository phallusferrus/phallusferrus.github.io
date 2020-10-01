
#include<stdio.h>

# define IN 1
# define OUT 0




void divider()
{
	char dividerline[20];
	int i;
	for (i = 0; i < 10; i++) {
		dividerline[i] = '-';
	}
	for (i = 0; i < 10; i++) {
		printf("%c",dividerline[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("%c", dividerline[i]);
	}
	printf("\n");
}


void wordCount()
{
	printf("Please enter some text\nThis program will produce a graph telling the length of the words\n");
	int c = 0;
	int nw = 0;
	int wl = 0;
	int frequency[10];
	char dividerline[20];
	int i;
	for (i = 0; i < 10; i++) {
		dividerline[i] = '-';
	}
	int state = OUT;
	for (i = 0; i < 10; i++) {
		frequency[i] = 0;
	}
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (wl >= 10) {
				frequency[0]++;
				state = OUT;
			} else{
			frequency[wl]++;
			state = OUT;
			}
		} else if (state == OUT) {
			state = IN;
			wl = 1;
		} else {
			wl++;
		}
	}
	divider();
	/*Here begins the vertical graphs*/



	int ranknine[10];
	if (frequency[1]  > 8) {
		ranknine[0] = 1;
	} else {
		ranknine[0] = 0;
	}
	if (frequency[2]  > 8) {
		ranknine[1] = 1;
	} else {
		ranknine[1] = 0;
	}

	if (frequency[3]  > 8) {
		ranknine[2] = 1;
	} else {
		ranknine[2] = 0;
	}

	if (frequency[4]  > 8) {
		ranknine[3] = 1;
	} else {
		ranknine[3] = 0;
	}

	if (frequency[5]  > 8) {
		ranknine[4] = 1;
	} else {
		ranknine[4] = 0;
	}
	if (frequency[6] > 8) {
		ranknine[5] = 1;
	} else {
		ranknine[5] = 0;
	}
	if (frequency[7] > 8) {
		ranknine[6] = 1;
	} else {
		ranknine[6] = 0;
	}
	if (frequency[8] > 8) {
		ranknine[7] = 1;
	} else {
		ranknine[7] = 0;
	}
	if (frequency[9] > 8) {
		ranknine[8] = 1;
	} else {
		ranknine[8] = 0;
	}
	if (frequency[0] > 8) {
		ranknine[9] = 1;
	} else {
		ranknine[9] = 0;
	}
	for (i = 0; i < 10; i++) {
		if (ranknine[i]  > 0) {
			printf("X");
		} else {
			printf(" ");
		}
	}
	printf("\n");


	int rankeight[10];
	if (frequency[1]  > 7) {
		rankeight[0] = 1;
	} else {
		rankeight[0] = 0;
	}
	if (frequency[2]  > 7) {
		rankeight[1] = 1;
	} else {
		rankeight[1] = 0;
	}

	if (frequency[3]  > 7) {
		rankeight[2] = 1;
	} else {
		rankeight[2] = 0;
	}

	if (frequency[4]  > 7) {
		rankeight[3] = 1;
	} else {
		rankeight[3] = 0;
	}

	if (frequency[5]  > 7) {
		rankeight[4] = 1;
	} else {
		rankeight[4] = 0;
	}
	if (frequency[6] > 7) {
		rankeight[5] = 1;
	} else {
		rankeight[5] = 0;
	}
	if (frequency[7] > 7) {
		rankeight[6] = 1;
	} else {
		rankeight[6] = 0;
	}
	if (frequency[8] > 7) {
		rankeight[7] = 1;
	} else {
		rankeight[7] = 0;
	}
	if (frequency[9] > 7) {
		rankeight[8] = 1;
	} else {
		rankeight[8] = 0;
	}
	if (frequency[0] > 7) {
		rankeight[9] = 1;
	} else {
		rankeight[9] = 0;
	}
	for (i = 0; i < 10; i++) {
		if (rankeight[i]  > 0) {
			printf("X");
		} else {
			printf(" ");
		}
	}
	printf("\n");

	
	int rankseven[10];
	if (frequency[1]  > 6) {
		rankseven[0] = 1;
	} else {
		rankseven[0] = 0;
	}
	if (frequency[2]  > 6) {
		rankseven[1] = 1;
	} else {
		rankseven[1] = 0;
	}

	if (frequency[3]  > 6) {
		rankseven[2] = 1;
	} else {
		rankseven[2] = 0;
	}

	if (frequency[4]  > 6) {
		rankseven[3] = 1;
	} else {
		rankseven[3] = 0;
	}

	if (frequency[5]  > 6) {
		rankseven[4] = 1;
	} else {
		rankseven[4] = 0;
	}
	if (frequency[6] > 6) {
		rankseven[5] = 1;
	} else {
		rankseven[5] = 0;
	}
	if (frequency[7] > 6) {
		rankseven[6] = 1;
	} else {
		rankseven[6] = 0;
	}
	if (frequency[8] > 6) {
		rankseven[7] = 1;
	} else {
		rankseven[7] = 0;
	}
	if (frequency[9] > 6) {
		rankseven[8] = 1;
	} else {
		rankseven[8] = 0;
	}
	if (frequency[0] > 6) {
		rankseven[9] = 1;
	} else {
		rankseven[9] = 0;
	}
	for (i = 0; i < 10; i++) {
		if (rankseven[i]  > 0) {
			printf("X");
		} else {
			printf(" ");
		}
	}
	printf("\n");


	int ranksix[10];
	if (frequency[1]  > 5) {
		ranksix[0] = 1;
	} else {
		ranksix[0] = 0;
	}
	if (frequency[2]  > 5) {
		ranksix[1] = 1;
	} else {
		ranksix[1] = 0;
	}

	if (frequency[3]  > 5) {
		ranksix[2] = 1;
	} else {
		ranksix[2] = 0;
	}

	if (frequency[4]  > 5) {
		ranksix[3] = 1;
	} else {
		ranksix[3] = 0;
	}

	if (frequency[5]  > 5) {
		ranksix[4] = 1;
	} else {
		ranksix[4] = 0;
	}
	if (frequency[6] > 5) {
		ranksix[5] = 1;
	} else {
		ranksix[5] = 0;
	}
	if (frequency[7] > 5) {
		ranksix[6] = 1;
	} else {
		ranksix[6] = 0;
	}
	if (frequency[8] > 5) {
		ranksix[7] = 1;
	} else {
		ranksix[7] = 0;
	}
	if (frequency[9] > 5) {
		ranksix[8] = 1;
	} else {
		ranksix[8] = 0;
	}
	if (frequency[0] > 5) {
		ranksix[9] = 1;
	} else {
		ranksix[9] = 0;
	}
	for (i = 0; i < 10; i++) {
		if (ranksix[i]  > 0) {
			printf("X");
		} else {
			printf(" ");
		}
	}
	printf("\n");


	int rankfive[10];
	if (frequency[1]  > 4) {
		rankfive[0] = 1;
	} else {
		rankfive[0] = 0;
	}
	if (frequency[2]  > 4) {
		rankfive[1] = 1;
	} else {
		rankfive[1] = 0;
	}

	if (frequency[3]  > 4) {
		rankfive[2] = 1;
	} else {
		rankfive[2] = 0;
	}

	if (frequency[4]  > 4) {
		rankfive[3] = 1;
	} else {
		rankfive[3] = 0;
	}

	if (frequency[5]  > 4) {
		rankfive[4] = 1;
	} else {
		rankfive[4] = 0;
	}
	if (frequency[6] > 4) {
		rankfive[5] = 1;
	} else {
		rankfive[5] = 0;
	}
	if (frequency[7] > 4) {
		rankfive[6] = 1;
	} else {
		rankfive[6] = 0;
	}
	if (frequency[8] > 4) {
		rankfive[7] = 1;
	} else {
		rankfive[7] = 0;
	}
	if (frequency[9] > 4) {
		rankfive[8] = 1;
	} else {
		rankfive[8] = 0;
	}
	if (frequency[0] > 4) {
		rankfive[9] = 1;
	} else {
		rankfive[9] = 0;
	}
	for (i = 0; i < 10; i++) {
		if (rankfive[i]  > 0) {
			printf("X");
		} else {
			printf(" ");
		}
	}
	printf("\n");

	int rankfour[10];
	if (frequency[1]  > 3) {
		rankfour[0] = 1;
	} else {
		rankfour[0] = 0;
	}
	if (frequency[2]  > 3) {
		rankfour[1] = 1;
	} else {
		rankfour[1] = 0;
	}

	if (frequency[3]  > 3) {
		rankfour[2] = 1;
	} else {
		rankfour[2] = 0;
	}

	if (frequency[4]  > 3) {
		rankfour[3] = 1;
	} else {
		rankfour[3] = 0;
	}

	if (frequency[5]  > 3) {
		rankfour[4] = 1;
	} else {
		rankfour[4] = 0;
	}
	if (frequency[6] > 3) {
		rankfour[5] = 1;
	} else {
		rankfour[5] = 0;
	}
	if (frequency[7] > 3) {
		rankfour[6] = 1;
	} else {
		rankfour[6] = 0;
	}
	if (frequency[8] > 3) {
		rankfour[7] = 1;
	} else {
		rankfour[7] = 0;
	}
	if (frequency[9] > 3) {
		rankfour[8] = 1;
	} else {
		rankfour[8] = 0;
	}
	if (frequency[0] > 3) {
		rankfour[9] = 1;
	} else {
		rankfour[9] = 0;
	}
	for (i = 0; i < 10; i++) {
		if (rankfour[i]  > 0) {
			printf("X");
		} else {
			printf(" ");
		}
	}
	printf("\n");


	int rankthree[10];
	if (frequency[1]  > 2) {
		rankthree[0] = 1;
	} else {
		rankthree[0] = 0;
	}
	if (frequency[2]  > 2) {
		rankthree[1] = 1;
	} else {
		rankthree[1] = 0;
	}

	if (frequency[3]  > 2) {
		rankthree[2] = 1;
	} else {
		rankthree[2] = 0;
	}

	if (frequency[4]  > 2) {
		rankthree[3] = 1;
	} else {
		rankthree[3] = 0;
	}

	if (frequency[5]  > 2) {
		rankthree[4] = 1;
	} else {
		rankthree[4] = 0;
	}
	if (frequency[6]  > 2) {
		rankthree[5] = 1;
	} else {
		rankthree[5] = 0;
	}
	if (frequency[7]  > 2) {
		rankthree[6] = 1;
	} else {
		rankthree[6] = 0;
	}
	if (frequency[8]  > 2) {
		rankthree[7] = 1;
	} else {
		rankthree[7] = 0;
	}
	if (frequency[9]  > 2) {
		rankthree[8] = 1;
	} else {
		rankthree[8] = 0;
	}
	if (frequency[0]  > 2) {
		rankthree[9] = 1;
	} else {
		rankthree[9] = 0;
	}
	for (i = 0; i < 10; i++) {
		if (rankthree[i]  > 0) {
			printf("X");
		} else {
			printf(" ");
		}
	}
	printf("\n");

	int ranktwo[10];
	if (frequency[1] > 1) {
		ranktwo[0] = 1;
	} else {
		ranktwo[0] = 0;
	}
	if (frequency[2] > 1) {
		ranktwo[1] = 1;
	} else {
		ranktwo[1] = 0;
	}

	if (frequency[3] > 1) {
		ranktwo[2] = 1;
	} else {
		ranktwo[2] = 0;
	}

	if (frequency[4] > 1) {
		ranktwo[3] = 1;
	} else {
		ranktwo[3] = 0;
	}

	if (frequency[5] > 1) {
		ranktwo[4] = 1;
	} else {
		ranktwo[4] = 0;
	}
	if (frequency[6] > 1) {
		ranktwo[5] = 1;
	} else {
		ranktwo[5] = 0;
	}
	if (frequency[7] > 1) {
		ranktwo[6] = 1;
	} else {
		ranktwo[6] = 0;
	}
	if (frequency[8] > 1) {
		ranktwo[7] = 1;
	} else {
		ranktwo[7] = 0;
	}
	if (frequency[9] > 1) {
		ranktwo[8] = 1;
	} else {
		ranktwo[8] = 0;
	}
	if (frequency[0] > 1) {
		ranktwo[9] = 1;
	} else {
		ranktwo[9] = 0;
	}
	for (i = 0; i < 10; i++) {
		if (ranktwo[i] > 0) {
			printf("X");
		} else {
			printf(" ");
		}
	}
	printf("\n");

	int rankone[10];
	if (frequency[1] > 0) {
		rankone[0] = 1;
	} else {
		rankone[0] = 0;
	}
	if (frequency[2] > 0) {
		rankone[1] = 1;
	} else {
		rankone[1] = 0;
	}

	if (frequency[3] > 0) {
		rankone[2] = 1;
	} else {
		rankone[2] = 0;
	}

	if (frequency[4] > 0) {
		rankone[3] = 1;
	} else {
		rankone[3] = 0;
	}

	if (frequency[5] > 0) {
		rankone[4] = 1;
	} else {
		rankone[4] = 0;
	}
	if (frequency[6] > 1) {
		rankone[5] = 1;
	} else {
		rankone[5] = 0;
	}
	if (frequency[7] > 1) {
		rankone[6] = 1;
	} else {
		rankone[6] = 0;
	}
	if (frequency[8] > 1) {
		rankone[7] = 1;
	} else {
		rankone[7] = 0;
	}
	if (frequency[9] > 1) {
		rankone[8] = 1;
	} else {
		rankone[8] = 0;
	}
	if (frequency[0] > 1) {
		rankone[9] = 1;
	} else {
		rankone[9] = 0;
	}
	for (i = 0; i < 10; i++) {
		if (rankone[i] > 0) {
			printf("X");
		} else {
			printf(" ");
		}
	}
	printf("\n");

	int rankzero[10];
	for (i = 0; i < 9; i++) {
		rankzero[i] = i+1;
	}
	for (i = 0; i < 9; i++) {
		printf("%d", rankzero[i]);
	}
	printf("+");

	printf("\n\n*Here begins the horizontal graph*/\n\n");

	divider();
	for (i = 1; i < 10; i++) {
		printf("%d", frequency[i]);
	}
	printf("%d", frequency[0]);
	printf("\n");
	divider();
	for (i = 1; i < 10; i++) {
		printf("%d", i);
	}
	printf("0\n");
	divider();
	printf("\n\n");
	for (i = 1; i < 10; i++) {
		printf("%d:", i);
		while (frequency[i] > 0) {
			printf("X");
			frequency[i]--;
		}
		printf("\n");
	}
	printf("+:");
	while (frequency[0] > 0) {
		printf("X");
		frequency[0]--;
	}
	divider();
	printf("\n\nEND WORDCOUNT\n\n");
}

void charCount()
{
	int c, i,cc;
	int exampler = 'z';
	int chars[40];
	int sheet[40];
	for (i = 0; i < 40; i ++) {
		chars[i] = 0;
		sheet[i] = 0;
	}
	i = 0;
	printf("\n");
	while ((c = getchar()) != EOF) {
		if (c >= 0 && c <= 9) {
			chars[i] = c;
			sheet[c]++;
			i++;
		} else {
			chars[i] = c - 0;
			sheet[c-87]++;
			i++;
		}
	}
	printf("\n");
	for (i = 35; i >= 10; i--) {
		printf("%c:", (i + 87));
		while (sheet[i] > 0) {
			printf("X");
			sheet[i]--;
		}
		printf("\n");
	}
	for (i = 9; i >= 0; i--) {
		printf("%d:", i);
		while (sheet[i] > 0) {
			printf("X");
			sheet[i]--;
		}
		printf("\n");
	}
	printf("\n");
				

	printf("\nHERHERHER\n");
	printf("%d = %c\n", exampler, exampler);
	exampler++;
	printf("%d = %c\n", exampler, exampler);
}


void main()
{
	charCount();
	/*wordCount();*/
	printf("Please enter a number to analyze\n");
	int c;
	int digies[10];
	int i;
	for (i = 0; i < 10; i++) {
		digies[i] = 0;
	}
	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			digies[c-'0']++; 
		}
	}
	printf("\n----------\n0123456789\n----------\n\n");
	for (i = 0; i < 10; i++) {
		printf("%d", digies[i]);
	}
	printf("\n\n\n");
	for (i = 0; i < 10; i++) {
		printf("%d:", i);
		while (digies[i] > 0) {
			printf("X");
			digies[i]--;
		}
		printf("\n");
	}
}
