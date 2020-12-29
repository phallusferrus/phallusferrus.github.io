#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

	srand(time(0));
	int d;
	d = rand() % 6 + 1;
	printf("%d\n", d);	


	/*d = rand() % 6 + 1;

	printf("%d\n", d);	*/
	return 0;
	


	/*
	int rand();
	int d;

	d = rand() % 100 + 1;

	printf("%d\n", d);

	return 0;

	*/

}


