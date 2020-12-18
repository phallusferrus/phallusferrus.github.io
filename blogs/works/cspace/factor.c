#include<stdio.h>

#define MAXLEN 123456

void main()
{
	int base;
	int i;
	int factors[MAXLEN];
	int count = 0;
	for (i=0; i < MAXLEN; i++) {
		factors[i] = 0;
	}
	scanf("%d", &base);
	for (i=1; i < base; i++) {
		if (base % i == 0) {
			factors[i] = i;
		}
	}
	for (i=0; i<MAXLEN; i++) {
		if (factors[i] != 0) {
			count++;
			printf("%d\n", factors[i]);
		}
	}
	printf("\nCOUNT: %d\nEXIT!\n",count);
}

