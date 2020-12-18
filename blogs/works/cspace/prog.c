/* My first C program uwu */

#include<stdio.h>
#include<string.h>

void numberGuess(int guess) {
	if (guess == 666) {
		printf("Yup %d is correct guess!\n", guess);
	} else if (guess > 666) {
		printf("Sorry %d is not correct! TOO HIGH!\n", guess);
	} else{
		printf("Sorry %d is not correct! TOO LOW!!\n", guess);
}
}
int square(int num) {
	int squared = 0;
	squared = num * num;
	printf("%d * %d = %d\n", num, num, squared);
}

void numerusMagnus(int num) {
	if (num > 10) {
		printf("%d numerus magnus est.\n", num);
	} else if (num == 10) {
		printf("%d numerus magnus non est, neque est parvus numerus.\n", num);
	} else {
		printf("%d non magnus numerus, sed numerus parvus est.\n", num);

	}


}

void primenums(int n) {
	int primesfound = 0;
	int primes[1000] = {2};
	int i = 3;
	int j;
	while (primesfound < n) {
		int primetry = 0;
		i++;
		for (j=0; j <= primesfound; j++) {
			if (i % primes[j] == 0){
				primetry ++;
			}
		}
		if (primetry == 0) {
			primesfound++;
			primes[primesfound] = i;
		}
	}
	for (i=0; i<n; i++){
		printf("%d is prime.\n", primes[i]);
	}
}

void multseven() {
	static int sevby = 1;
	int prod = 7 * sevby;
	printf("%d\n", prod);
	sevby++;
}


void numrom(int num) {
	int digit = 0;
	digit = num;
	char unum[] = "I";
	char quinque[] = "V";
	char decem[] = "X";
	char quinquaginta[] = "L";
	char centum[] = "C";
	char quingenti[] = "D";
	char mille[] = "M";
	char numeral[100] = "is: ";
	while (num > 0) {
		if (num >= 1000) {
			strncat(numeral, mille, 1);
			num -= 1000;
		} else if (num >= 900) {
			strncat(numeral, centum, 1);
			strncat(numeral, mille, 1);
			num -= 900;
		} else if (num >= 500) {
			strncat(numeral, quingenti, 1);
			num -= 500;
		} else if (num >= 400) {
			strncat(numeral, centum, 1);
			strncat(numeral, quingenti, 1);
			num -= 400;
		} else if (num >= 100) {
			strncat(numeral, centum, 1);
			num -= 100;
		} else if (num >= 90) {
			strncat(numeral, decem, 1);
			strncat(numeral, centum, 1);
			num -= 90;
		} else if (num >= 50) {
			strncat(numeral, quinquaginta, 1);
			num -= 50;
		} else if (num >= 40) {
			strncat(numeral, decem, 1);
			strncat(numeral, quinquaginta, 1);
			num -= 40;
		} else if (num >= 10) {
			strncat(numeral, decem, 1);
			num -= 10;
		} else if (num == 9) {
			strncat(numeral, unum, 1);
			strncat(numeral, decem, 1);
			num -= 9;
		} else if (num >= 5) {
			strncat(numeral, quinque, 1);
			num -= 5;
		} else if (num == 4) {
			strncat(numeral, unum, 1);
			strncat(numeral, quinque, 1);
			num -= 4;
		} else {
			strncat(numeral, unum, 1);
			num -= 1;
		}
	}
	printf("%d as a roman numeral %s\n", digit, numeral);
}

int main()
{

	int i;
	int j;
	float Average;
	float GradeSum;
	int a = 3;
	int b = 6;
	int c = 9;
	int sum = a + b + c;
	int grades[3];
	grades[0] = 80;
	grades[1] = 85;
	grades[2] = 90;
	int average = (grades[0] + grades[1] + grades[2]) / 3;
	char vowels[2][5] = {
		{'a', 'e', 'i', 'o', 'u'},
		{'A', 'E', 'I', 'O', 'U'}
	};
	int Grades[2][5] = {
		{80, 70, 65, 89, 90},
		{85, 80, 80, 82, 87}
	};
	char name[] = "Joe Blow";
	char first_name[] = "Joe";
	/*The 'char * str' is unchangeable! FYI*/
	char * last_name = "Blow";
	/* This is how you define a changeable str!*/
	char  spacer[] = " ";
	int digies[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int digiesum = 0;
	int digiepro = 1;
	printf("This is c programming in Linux\n");
	printf("Hello World!\n");
	printf("Salve Terra!\n");
	printf("Here Comes Sunshine!\n");
	printf("A = %d\n", a);
	printf("B = %d\n", b);
	printf("C = %d\n", c);
	printf("A + B + C = %d\n", sum);
	printf("grade Average is: %d\n", average);
	for (i = 0; i < 2; i++) {
		Average = 0;
		GradeSum = 0;
		for (j = 0; j < 5; j++) {
			GradeSum += Grades[i][j];
			Average = GradeSum / 5;
		}
		printf("The Average Grade for subject %d is: %.2f\n", i, Average);
		if (Average > 80) {
			printf("Congrats subject %d you win an ice cream party for good grades!\n", i);
		} else {
			printf("Sorry subject %d you did not do well enough to win ice cream party!\n", i);
}
	}
	numberGuess(69);
	numberGuess(420);
	numberGuess(12345);
	numberGuess(666);
	printf("The entered name is %s which is %d letters long\n", name, strlen(name)-1);
	if (strncmp(name, first_name, 3) == 0) {
		printf("Yup this here is %s %s\n", first_name, last_name);
	} else {
		printf("This ain't %s, this is %s %s\n", name, first_name, last_name);
	}
	strncat(first_name, spacer, 1);
	strncat(first_name, last_name, 4);
	printf("The full name (first+last) is: %s\n", first_name);
	for (i=0; i < 10; i++) {
		digiesum += digies[i];
	}
	for (i=0; i < 10; i++) {
		digiepro = digiepro * digies[i];
	}
	printf("The sum of the digits is: %d\n", digiesum);
	printf("The product of the digits is: %d\n", digiepro);
	int fizztest = 0;
	printf("FizzBuzz up to 100:\n");
	while (fizztest < 100){
		fizztest++;
		if (fizztest % 3 == 0 && fizztest % 5 == 0) {
			printf("%d - FizzBuzz!\n",fizztest);
		} else if (fizztest % 3 == 0) {
			printf("%d - Fizz\n", fizztest);
		} else if (fizztest % 5 == 0) {
			printf("%d - Buzz\n", fizztest);
		} else {
			printf("%d\n", fizztest);
		}
		continue;
	}
	int fizzbuzzfound = 0;
	int fizzbuzztest = 1;
	printf("First 100 FizzBuzz numbers:\n");
	while (fizzbuzzfound < 100){
		fizzbuzztest++;
		if (fizzbuzztest % 3 == 0 && fizzbuzztest % 5 == 0) {
			printf("FizzBuzz - %d\n",fizzbuzztest);
			fizzbuzzfound++;
		}
		continue;
	}
	square(5);
	square(69);
	square(420);
	numerusMagnus(5);
	numerusMagnus(10);
	numerusMagnus(15);
	char werd[100];
	printf("Enter a word: ");
	gets(werd);
	printf("\nYou entered: ");
	puts(werd);
	printf("\n");
	numrom(6);
	numrom(11);
	numrom(49);
	numrom(99);
	numrom(499);
	numrom(1997);
	numrom(1999);
	primenums(100);
	multseven();
	multseven();
	multseven();
	multseven();
	printf("Location of the fizzbuzzfound variable is: %x\n", &fizzbuzzfound);
	printf("Location of the fizztest variable is: %x\n", &fizztest);
	printf("Location of the last_name variable is: %x\n", &last_name);
	int *diga = &digies[2];
	int *digb = &digies[4];
	printf("%x\n",diga);
	printf("%x\n",digb);
	printf("----------------\n");
	int *pLocation0 = &digies[0];
	for (i=0; i<10; i++) {
		printf("%d = %d\n", digies + i,*(digies + i));
	}
	printf("%x is the address of the digies array in memory\n",pLocation0); 
	for (i=0; i<10; i++) {
		printf("%d\n",*(pLocation0 + i));
	}

	return 0;
}




