#include<stdio.h>
# define IN  1
# define OUT  0

void counter()
{
	double nc;
	for (nc = 0; getchar() != EOF; ++nc) 
		;
		printf("\nIn the loop: %f\n", nc);
	printf("%.0f\n", nc);
}

void linecounter()
{
	int nl, c, blank, bspace, tabs;
	nl = 0;
	c = nl;
	blank = nl;
	bspace = nl;
	tabs = nl;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}
	   	if (c == ' ') {
			blank++;
		} 
		if (c == '\b') {
			bspace++;
		} 
		if (c == '\t') {
			tabs++;
		}
	}
	printf("There were:\n%d new lines\n%d blanks\n%d backspaces\n%d tabs\n", nl, blank, bspace, tabs);

}

void blanker()
{
	int blanks = 0;
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (blanks < 1) {
				printf("%c", c);
				blanks++;
			}
		} else if ( c == '\t') {
			if (blanks < 1) {
				printf(" ", c);
				blanks++;
			}
		} else {
			printf("%c", c);
			blanks = 0;
		}
	}
}

void visables()
{
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			printf("\\t");
		} else if (c == '\b') {
			printf("\\b");
		} else if ( c == '\\') {
			printf("\\\\");
		} else {
			printf("%c", c);
		}
	}
}

void wordCount()
{

	int c, nc, nl, nw;
	int state = OUT;
	nc = nl = nw = c = 0;
	nl = c;
	nw = c;
	while ((c = getchar()) != EOF) {
		nc++;
		if (c == '\n') {
			nl++;
		}
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
		} else if (state == OUT){
			state = IN;
			nw++;
		}
	}
	printf("\nThere were:\n%d characters\n%d lines\n%d words\n", nc, nl, nw);
}

void wordLine()
{
	char werd[20];
	int position = 0;
	int c, i;
	for (i = 0; i < 20; i++) {
		werd[i] = 0;
	}
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			position = 0;
			for (i = 0; i < 20; i++) {
				printf("%c", werd[i]);
			}
			printf("\n");
			for (i = 0; i < 20; i++) {
				werd[i] = 0;
			}
		} else {
			werd[position] = c;
			position++;
		}
	}
}



void main()
{
	/*counter();*/
	/*linecounter();*/
	/*blanker();*/
	/*visables();*/
	/*wordCount();*/
	wordLine();
	int c;
	c == EOF;
	putchar(c);
	printf("%d\n", EOF);
	if (c == 0) {
		printf("ZERO!\n");
	} else if (c == 1) {
		printf("ONE!\n");
	} else {
		printf("NOT THE RIGHT THINGY!\n");
	}
	printf("REPETITIONER:\n");
	while ((c = getchar()) != EOF){
		putchar(c);
	}
}
