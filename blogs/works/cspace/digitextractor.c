#include<stdio.h>

void main()
{
	int c;
	int isNegative = 0;
	char output[10];
	int i;
	for (i=0; i<10; i++) {
		output[i] = 0;
	}
	int pos = 0;
	int goodies = 0;
	while ((c = getchar() ) != EOF) {
		if ( c == 62 ) {
			goodies = 1;
		} else if ( goodies > 0 ) {
			if (c == 45) {
				isNegative = 1;
			}
			else if (c >= 48 && c <= 57) {
				output[pos] = c;
				pos++;
			}
		}
	}
	if (isNegative > 0) {
		printf("-%s", output);
	} else {
		printf("%s", output);
	}
}




