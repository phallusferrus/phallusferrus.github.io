#include<stdio.h>

void calc();

void sumer()
{
	int opone;
	int optwo;
	int result;
	printf("Sumer!\n");
	printf("Please enter your operands\nOperand 1:	");
	scanf("%d", &opone);
	printf("Operand 2:	");
	scanf("%d", &optwo);
	result = opone + optwo;
	printf("%d + %d = %d\n", opone, optwo, result);
}

void suber() 
{
	printf("Suber!\n");
	int opone;
	int optwo;
	int result;
	printf("Please enter your operands\nOperand 1:	");
	scanf("%d", &opone);
	printf("Operand 2:	");
	scanf("%d", &optwo);
	result = opone - optwo;
	printf("%d - %d = %d\n", opone, optwo, result);
}

void multer()
{
	printf("Multer!\n");
	int opone;
	int optwo;
	int result;
	printf("Please enter your operands\nOperand 1:	");
	scanf("%d", &opone);
	printf("Operand 2:	");
	scanf("%d", &optwo);
	result = opone * optwo;
	printf("%d * %d = %d\n", opone, optwo, result);
}

void divider()
{
	printf("Divider!\n");
	float opone;
	float optwo;
	float result;
	printf("Please enter your operands\nOperand 1:	");
	scanf("%f", &opone);
	printf("Operand 2:	");
	scanf("%f", &optwo);
	result = opone / optwo;
	printf("%f / %f = %f\n", opone, optwo, result);
}

void square()
{
	printf("Square!\n");
	int root;
	int sqr;
	printf("Please enter the number you would like to square:	");
	scanf("%d", &root);
	sqr = root * root;
	printf("%d * %d = %d\n", root, root, sqr);
}

float powerer(float base, float power)
{
	float result = 1;
	int i;
	for (i=0; i < power; i++) {
		result = result * base;
	}
	printf("%f to the %f power is: %f\n", base, power, result);
	return result;
}

void powerhead()
{
	float base;
	float power;
	float result;
	printf("Please enter a base:	");
	scanf("%f", &base);
	printf("Please enter a power:	");
	scanf("%f", &power);
	result = powerer(base, power);
}

void squarerooter()
{
	printf("Square Root!\n");
	float base;
	float guess = 1.1;
	float iguess;
	printf("Please enter the radicand:	");
	scanf("%f", &base);
	iguess = (guess - (((guess * guess) - base) / (2 * guess)));
	int goodguess = 1;
	float result;
	printf("Guess:	%f\nIGuess:		%f\n", guess, iguess);
	while (goodguess > 0) {
		printf("Guess:	%f\nIGuess:		%f\n", guess, iguess);
		printf("goodguess = %d\n", result);
		if ((iguess - guess) > 0) {
			if((iguess - guess) > 0.001) {
			guess = iguess;
			iguess = (guess - (((guess * guess) - base) / (2 * guess)));
			}
			else {
				result = iguess;
				goodguess = 0;
			}
		}
		else if ((iguess - guess) < 0) {
			if(((((iguess/guess) - guess) * -1)) > 0.001) {
			guess = iguess;
			iguess = (guess - (((guess * guess) - base) / (2 * guess)));
			}
			else {
				result = iguess;
				goodguess = 0;
			}
		}
		else {
			printf("IGuess = Guess\n");
			result = iguess;
			goodguess = 0;
		}
	}
	   printf("The square root of %f is %f\n", base, result);
}

void rooterer()
{
	printf("Nth Root!\n");
	float base;
	float index;
	printf("Please enter the radicand:	");
	scanf("%f", &base);
	printf("Please enter the index:	");
	scanf("%f", &index);
	float result;
	float guess = 1.15;
	float powerguess = powerer(guess, index);
	int guessdecline = powerer(guess, index-1);
	float iguess = (guess - ((powerguess - base) / (index * guessdecline)));
	printf ("Powerguess: %f\n", powerguess);
	printf("Guess: %f\n", guess);
	printf("IGuess: %f\n", iguess);
	int goodguess = 1;
	while (goodguess > 0) {
		if ((iguess - guess) > 0) {
			if((iguess - guess) > 0.001) {
				guess = iguess;
				if (guess < 0) {
					guess = guess * -1;
				}
				powerguess = powerer(guess, index);
				guessdecline = powerer(guess, index-1);
				iguess = (guess - ((powerguess - base) / (index * guessdecline)));
			}
			else {
				result = iguess;
				goodguess = 0;
			}
		}
		else if ((iguess - guess) < 0) {
			if(((iguess - guess) * -1) > 0.001) {
				guess = iguess;
				if (guess < 0) {
					guess = guess * -1;
				}
				powerguess = powerer(guess, index);
				guessdecline = powerer(guess, index-1);
				iguess = (guess - ((powerguess - base) / (index * guessdecline)));
			}
			else {
				result = iguess;
				goodguess = 0;
			}
		}
		else {
			printf("IGuess = Guess");
			result = iguess;
			goodguess = 0;
		}
	}
	if (result > 1234567890) {
		printf("\n-----\nERROR\n-----\nSorry this function has failed you.\nThis is likely a result of entering an excessively large number or trying to compute a high index of a relatively large radicand. Apologies. Hopefully when I GET MY SHIT TOGETHER this function will work better....to an extent....IDK...");
	} else{
		printf("The %f root of %f is: %f\n", index, base, result);
	}
}

void extra()
{
	char sqr[1] = "s";
	char sqrt[1] = "r";
	char exiter[1] = "x";
	char pow[1] = "p";
	char rooter[1] = "o";
	char operatorr[20];
	printf("Extra!\n[s]quare\n[r] - squareroot\n[o] - Rooter - (DOES NOT WORK!)\n[p]ower\n[x] to exit\n Please enter the operation you would like to perform:	");
	fgets(operatorr, 20, stdin);
	if (operatorr[0] == sqr[0]) {
		square();
	} else if (operatorr[0] == sqrt[0]) {
		squarerooter();
	} else if (operatorr[0] == pow[0]) {
		powerhead();
	} else if (operatorr[0] == exiter[0]) {
		calc();
	} else if (operatorr[0] == rooter[0]) {
		rooterer();
	} else {
		extra();
	}
}

void calc()
{
	char operator[20];
	char sum[1] = "a";
	char sub[1] = "s";
	char mult[1] = "m";
	char div[1] = "d";
	char ext[1] = "x";
	printf("[a]dd\n[s]ubtract\n[m]ultiply\n[d]ivide\n[x]tra\nPlease enter the operation you would like to perform:	");
	fgets(operator, 20, stdin);
	if (operator[0] == sum[0]) {
		sumer();
	} else if (operator[0] == sub[0]) {
		suber();
	} else if (operator[0] == mult[0]) {
		multer();
	} else if (operator[0] == div[0]) {
		divider();
	} else if (operator[0] == ext[0]) {
			extra();
	} else {
		printf("Please enter a valid operation!\n");
		calc();
	}
}

int main()
{
	calc();
	printf("Thanks for playing :)\n");
	return 0;
}
