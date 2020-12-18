
#include<stdio.h>
#define MAXLEN 1000



/*int charstostring()
{
	int i, c;
	c = i = 0;
	int charstring[MAXLEN];
	while ((c = getchar()) != 0) {
		charstring[i] = c;
		i++;
	}
	return(charstring);
}*/

int powerer(int base, int power);

void main()
{

	int i, c;
	int hra[MAXLEN];
	char dra[MAXLEN];
	int bra[MAXLEN];
	for (i = 0; i<MAXLEN; i++) {
		hra[i] = 0;
		dra[i] = 0;
		bra[i] = 0;
	}
	int cc = 0;
	i = 0;
	int di = 0;
	int bi = 0;
	int decfin = 0;
	int pospow;
/*	int jahstring[MAXLEN];
	jahstring = chartostring();
	for (i = 0; i < MAXLEN; i++) {
		printf("%c", jahstring[i]);
	}*/
	printf("\n\nPlease enter a hex:	");
	while ((c = getchar()) != EOF) {
		printf("%c\n", c);
		if (c >= '0' && c <= '9') {
			printf("DIGIT\n");
			cc = c - 0;
			hra[i] = cc;
			i++;
		} else if (c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E' || c == 'F') {	
			   c = c + 32;
			   hra[i] = c;
			   i++;
		} else if ( c > 'f' || c < 'a') {
			printf("ERROR!\n");
		} else {
			hra[i] = c;
			i++;
		}
	}
	for (i = 0; i < MAXLEN; i++) {
		if  ((hra[i] >= '0' && hra[i] <= '9') || (hra[i] <= 'f' && hra[i] >= 'a')) {
			printf("%c", hra[i]);
			if (hra[i] == '0') {
				bra[bi] = 0;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 0;
				bi++;
			} else if (hra[i] == '1') {
				bra[bi] = 0;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 1;
				bi++;
			} else if (hra[i] == '2') {
				bra[bi] = 0;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 0;
				bi++;
			} else if (hra[i] == '3') {
				bra[bi] = 0;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 1;
				bi++;
			} else if (hra[i] == '4') {
				bra[bi] = 0;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 0;
				bi++;
			} else if (hra[i] == '5') {
				bra[bi] = 0;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 1;
				bi++;
			} else if (hra[i] == '6') {
				bra[bi] = 0;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 0;
				bi++;
			} else if (hra[i] == '7') {
				bra[bi] = 0;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 1;
				bi++;
			} else if (hra[i] == '8') {
				bra[bi] = 1;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 0;
				bi++;
			} else if (hra[i] == '9') {
				bra[bi] = 1;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 1;
				bi++;
			} else if (hra[i] == 'a') {
				bra[bi] = 1;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 0;
				bi++;
			} else if (hra[i] == 'b') {
				bra[bi] = 1;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 1;
				bi++;
			} else if (hra[i] == 'c') {
				bra[bi] = 1;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 0;
				bi++;
			} else if (hra[i] == 'd') {
				bra[bi] = 1;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 0;
				bi++;
				bra[bi] = 1;
				bi++;
			} else if (hra[i] == 'e') {
				bra[bi] = 1;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 0;
				bi++;
			} else if (hra[i] == 'f') {
				bra[bi] = 1;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 1;
				bi++;
				bra[bi] = 1;
				bi++;
			} else {
				printf("BIGOOFXXX");
			}
		}
	}
	printf("\n");
	for (i = 0; i < bi; i++) {
		printf("%d", bra[i]);
	}
	printf("\n_______________\n");
	for (i = 0; i<MAXLEN; i++) {
		printf("%c", hra[i]);
	}
	printf("\n");
	printf("%d LONG\n", bi);
	for (i = 0; i < bi; i++) {
		pospow = powerer(2, ((bi-i) - 1));
		decfin = (decfin + (bra[i] * pospow));
	}
	printf("DEC: %d\n",decfin);


}

int powerer(int base, int power) 
{
	int result = 1;
	int i;
	for (i=0; i < power; i++) {
		result = result * base;
	}
	return result;
}
