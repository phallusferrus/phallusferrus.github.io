#include<stdio.h>
#include<string.h>




void pactria()
{
	int layers;
	int layeven;
	int row[20];
	printf("Please enter layer INT:	");
	scanf("%d", &layers);
	printf("You entered %d\n", layers);
	if (layers % 2 == 0) {
		printf("%d is an even number!\n", layers);
		layeven = 1;
	} else {
		printf("%d is an odd number!\n", layers);
		layeven = 0;
	}
	int i;
	while (layers > 0) {
		i = 0;
		printf("[ ");
		for (i = 0; i <= layers; i ++) {
			if (layers == 0 || layers == 1) {
				row[i] = 1;
				i++;
			} else {
				row[i] = row[i-1] + 1;
				i++;
			}
			printf("%d ", row[i-1]);
		}
		printf("]\n");
		layers--;
	}

	
}


int pascal(int base, int rank)
{

	int digitt;
	int countah;
	while (rank >= countah) {
		if (rank == 0) {
			digitt++;
			countah++;
		} else if (rank == 1) {
			digitt++;
			countah++;
		} else {
			int nrank = rank - 1;
			int numerat = pascal(base, nrank);
			digitt = digitt + numerat;
			countah++;
		}
	}
	return(digitt);
}

void main()
{


	pactria();
	int basecount = 3;
	int base = 1;
	int triangle[20];
	int counted;
	printf("PASCALS TRIANGLE TO THE %d!\n\n[", basecount);
	while (base <= basecount) {
		counted = 0;
		for (counted = 0; counted < basecount; ++counted) {
			int digit = 0;
			digit = pascal(base, counted);
			printf("%d, ", digit);
		}
		printf("]\n");
		base++;
	}

}



