#include<stdio.h>
#define MAXLEN 1000

void main() 
{
	int c;
	char lline[MAXLEN];
	char bline[MAXLEN];
	int llen = 0;
	int blen = 0;
	int i;
	for (i=0; i<MAXLEN; i++) {
		lline[MAXLEN] = 0;
		bline[MAXLEN] = 0;
	}
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			if (blen > llen) {
				for (i=0; i <= blen; i++) {
					lline[i] = bline[i];
				}
				llen = blen;
				blen = 0;
				for (i=0; i<MAXLEN; i++) {
					bline[i] = 0;
				}
			}
		} else if (c == '\t' || c == ' ') {
			if (blen == 0) {
				bline[blen] = 0;
			} else if (bline[blen-1] == ' ' || bline[blen-1] == '\n' || bline[blen-1] == 0) {
				bline[blen] = 0;
			} else {
				bline[blen] = ' ';
			}
			blen++;
		} else {
			bline[blen] = c;
			blen++;
		}
		
	}
	for (i=0; i<=llen; i++) {
		printf("-");
	}
	printf("\nREVERSE\n");
	for (i=llen; i>=0; i--) {
		printf("%c", lline[i]);
	}
	printf("\n");
	for (i=0; i<=llen; i++) {
		printf("-");
	}
	printf("\n");
	for (i=0; i<=llen; i++) {
		if (lline[i] != 0) {
			printf("%c", lline[i]);
		}
	}
	printf("\n");
	for (i=0; i<=llen; i++) {
		printf("-");
	}
	printf("\n");
	if (llen > 80) {
		for (i=0; i<=llen; i++) {
			printf("%c", lline[i]);
		}
	} else {
		printf("%d", llen);
	}
	printf("\n");
	for (i=0; i<=llen; i++) {
		printf("-");
	}
	printf("\n");
}


/*remove extra spaces, tabs, etc -- reverse character string */


