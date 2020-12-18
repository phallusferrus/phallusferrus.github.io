#include<stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 5

void ftoc()
{
	float starttemp;
	float endtemp;
	printf("Please enter the temperature in F	:");
	scanf("%f", &starttemp);
	endtemp = ((starttemp - 32) / 1.8);
	printf("%f degrees F == %f degrees C\n", starttemp, endtemp);

}

void ctof()
{
	float starttemp;
	float endtemp;
	printf("Please enter the temperature in C	:");
	scanf("%f", &starttemp);
	endtemp = 32 + (starttemp * 1.8);
	printf("%f degrees C == %f degrees F\n", starttemp, endtemp);

}

void ftab() 
{
	int lowerr = 0;
	int upperr = 300;
	int stepr = 5;
	float celr, farr;
	printf("F---------------C\n");
	while (lowerr <= upperr) {
		farr = lowerr;
		celr = ((farr - 32) / 1.8);
		printf("%6.3f - %6.3f\n", farr, celr);
		printf("F---------------C\n");
		lowerr = lowerr + stepr;
	}
}

void ptab()
{
	int lower = 0;
	int upper = 115;
	int step = 5;
	float cel, far;
	printf("C--------------------------------F\n");
	while (lower <= upper) {
		cel = lower;
		far = 32 + (1.8*cel);
		printf("%f	-	%f\n", cel, far);
		lower = lower + step;
		printf("----------------------------------\n");
	}
}

void optab()
{
	float fahr;
	printf("OPTAB!");
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
		printf("F---------------C\n%6.3f - %6.3f\n", fahr, ((fahr-32)/1.8));
	}
}


int main()
{

	char convers[20];
	char faron[1] = "f";
	char cels[1] = "c";
	char tabl[1] = "t";
	printf("Which direction would you like to convert?\n");
	printf("[f] for F->C\n[c] for C->F\n[t] for Table\n:");
	fgets(convers, 20, stdin);
	if (convers[0] == faron[0]) {
		ftoc();
	} else if (convers[0] == cels[0]) {
		ctof();
	} else if (convers[0] == tabl[0]) {
		ptab();
		ftab();
		optab();
	} else {
		printf("Please enter 'f' or 'c'\n");
		main();
	}
	printf("Thanks for playing!\n");
	return 0;
}
