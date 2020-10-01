

#include<stdio.h>
#include<stdlib.h>



struct theDead {
	char lgav[50];
	char gav[50];
	char bass[50];
	char piano[50];
	int pig;
	int don;
	int mik;
};

void sum(int a,  int b) 
{
	int res;
	res = a + b;
	printf("%d\n", res);
}

void summ(int a, int b)
{
	int i;
	int sum = 0;
	for (i=a; i <=b; i++) {
		sum += i;
	}
	printf("%d\n", sum);
}

void digits(int n)
{
	int digs[n];
	int i;
	int filler = 0;
	for (i = 0; i < n; i++) {
		filler++;
		digs[i] = filler;
	}
	for (i = 0; i< n; i++) {
		printf("%d\n", digs[i]);
	}
}
void bander(struct theDead sixties);

void bander(struct theDead lineup)
{

	if (lineup.pig > 0) {
		printf("Featuring PIGPEN\n");
	}
	printf("Lead Guitar and Vocals:	");
	puts((lineup).lgav);
	printf("\n");
	printf("Guitar and Vocals:	");
	puts((lineup).gav);
	printf("\n");
	printf("Bass and Vocals:	\nPhil Lesh\n");
	printf("Drums and Percussion:	\nBill Kreutzman\n");
	if (lineup.mik > 0) {
		printf("Drums and Percussion: 	\nMikey Hart\n");
	}
	if (lineup.pig < 1) {
		printf("Piano:	");
		puts((lineup).piano);
		printf("\n");
	}
	if (lineup.don > 0) {
		printf("Vocals:		Donna Jean Gaudxau");
	}
}	

int lineu;
			
int main() 
{
	int a = 1;
	int b = 70;
	printf("The sum of %d and %d is: ", a, b);
	sum(a, b);
	printf("The sum of all numbers between %d and %d is: ", a, b);
	summ(a, b);
	digits(50);

	struct theDead sixties;

	sixties.lgav -> "Jerry Garcia";
	sixties.gav -> "Bobby Weir";
	sixties.piano -> "Pigpen";
	sixties.pig = 1;
	sixties.don = 0;
	sixties.mik = 1;
	return 0;

}

