#include<stdio.h>


# define MAXLEN 1234567
# define IN 1
# define OUT 0
# define TBOXW 35


/* 
 *
 *
 *
 * 
					_____  
				^..^     \9
				(oo)_____/ 
				   WW  WW





     _____________________   
    |                     |
    >  erehay isay extay  <
	|_____________________| 
            \       _____  
             \  ^..^     \9
                (oo)_____/ 
                   WW  WW
                



*/

void main()
{
	char pwerd[MAXLEN];
	char lwerd[MAXLEN];
	int i, c;
	int state;
	state = OUT;
	int wl = 0;
	int fl[5];
	for (i=0; i<5; i++) {
		fl[i] = 0;
	}
	for (i=0; i<MAXLEN; i++) {
		lwerd[i] = 0;
		pwerd[i] = 0;
	}
	i = 0;
	int nl = 0;
	int vowl = 0;
	int flc = 0;
	int flcc = 0;
	int normword = 0;
	int pwc = 0;
	int twid = 0;
	int numlines = 0;
	int lineon;
	/*printf("PIGLATIN:\n");*/
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			nl = 0;
		}
		if (c < 65 || (c > 90 && c < 97) || c > 122) {
			state = OUT;
			while (wl > 1 ) {
				if (i - (wl - 1) >= 0) {
					/*printf("%c", lwerd[i - (wl -1)]);*/
					pwerd[pwc] = lwerd[i - (wl - 1)];
					pwc++;
					wl--;
				}
			}
			for (flc = 0; flc < 5; flc++) {
				if (fl[flc] != 0) {
					/*printf("%c", fl[flc]);*/
					pwerd[pwc] = fl[flc];
					if (fl[flc] == 'q') {
						pwc++;
						pwerd[pwc] = 'u';
					}
					pwc++;
				}
			}
			/*printf("ay%c", c);*/
			pwerd[pwc] = 'a';
			pwc++;
			pwerd[pwc] = 'y';
			pwc++;
			pwerd[pwc] = c;
			pwc++;
			for (flc = 0; flc < 5; flc++) {
				fl[flc] = 0;
			}
			normword = 0;
			vowl = 0;
			flcc = 0;
		} else if (state == OUT) {
			state = IN;
			wl = 1;
			if (c >= 65 && c <= 90) {
				c = c + 32;
			}
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {

				for (i=0; i<5; i++) {
					fl[i] = 0;
				}
				if (nl == 0) {
					lwerd[i] = c - 32;
					nl++;
				} else {
					lwerd[i] = c;
				}
				i++;
				normword++;
				wl++;
				vowl++;
			} else {
				fl[0] = c;
			}
		} else {
			if (c >= 65 && c <= 90) {
				c = c + 32;
			}
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || normword > 0 || c == 'y') {
				if (nl == 0) {
					c = c - 32;
					nl++;
				}
				normword++;
				lwerd[i] = c;
				wl++;
				i++;
			} else { 
				flcc++;
				if (c == 'q') {
					fl[flcc] = c;
					flcc++;
					fl[flcc] = 'u';
					flcc++;
				} else {
					fl[flcc] = c;
				}
			}
		}	
	}
	/*printf(" PIGSAY \n");*/
	for (i = 0; i < MAXLEN; i++) {
		if (pwerd[i] != '\n') {
			if (pwerd[i] != 0) {
				twid++;
			}
		}
	}
	printf("\n\n\n");



	if (twid > TBOXW) {
		numlines = (twid / TBOXW) +1;
		lineon = numlines - numlines;
		printf("  _");
		for (i = 0; i < TBOXW; i++) {
			printf("_");
		}
		printf(" \n");
		printf(" / ");
		for (i = 1; i < TBOXW; i++) {
			printf(" ");
		}
		printf(" \\\n");
		while (numlines > (lineon +1)) {
			printf("| ");
			for (i = (0 + (lineon * TBOXW)); i < (TBOXW + (lineon * TBOXW)); i++) {
				if (pwerd[i] != 0 && pwerd[i] != '\n'){
					printf("%c", pwerd[i]);
				}
			}
			while (i < ((numlines+1) * TBOXW) && (lineon+1) == numlines) {
				printf(" ");
				i++;
				i++;
			}
			printf("  |\n",lineon,numlines);
			lineon++;
		}
		if (numlines == (lineon+1)) {
			printf("| ");
			for (i = ((numlines-1) * TBOXW); i < (TBOXW * (numlines)); i++) {
				if (pwerd[i] != 0 && pwerd[i] != '\n') {
					printf("%c", pwerd[i]);
				} else {
					printf(" ");
				}
			}
			printf("  |\n");

		} else {
			printf(" \\ ");
			for (i = 0; i < TBOXW; i++) {
				printf(" ");
			}
			printf(" /\n");
			printf(" _");
			for (i = 1; i<TBOXW; i++) {
				printf("_");
			}
			printf("_ \n");
		}
		printf(" \\ ");
		for (i = 1; i < TBOXW; i++) {
			printf("_");
		}
		printf("_/\n");
	} else {
		printf("  _");
		for (i = 1; i < twid; i++) {
			printf("_");
		}
		printf("__\n");
		printf(" / ");
		for (i = 1; i < twid; i++) {
			printf(" ");
		}
		printf("  \\\n");
		printf("<  ");
		for (i = 0; i < MAXLEN; i++) {
			if (pwerd[i] != '\n' && pwerd != 0) {
				printf("%c", pwerd[i]);
			}
		}
		printf("  >\n");
		printf(" \\ _");
		for (i = 0; i < twid; i++) {
			printf("_");
		}
		printf("/\n");
	}


	

	printf("  \\\\\n");
	printf("   \\\\      _____    \n");
	printf("    \\\\ ^..^     \\9\n");
	printf("       (oo)_____/ \n");
	printf("          WW  WW\n\n\n");
	/*printf("%d\n",numlines);*/



}

/*
            \       _____  
             \  ^..^     \9
                (oo)_____/ 
                   WW  WW

*/



