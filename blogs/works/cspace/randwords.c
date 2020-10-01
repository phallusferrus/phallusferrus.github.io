#include<stdio.h>
#include<time.h>
#include<stdlib.h>


/*
long randnum(long max) 
{
	time_t seconds;
	seconds = 0;
	seconds = time(NULL);
	long goodtime;
	goodtime =  &seconds;
	printf("XXX: %d\n", goodtime);
	while (seconds > max) {
		printf("S:  %ld\n", seconds);
		while (seconds > 123) {
			seconds = seconds / (seconds + 13);
			printf("SS: %ld\n", seconds);
		}
		seconds -= (max - 1);
		printf("SSS: %ld\n", seconds);
	}
	if (seconds > max) {
		printf("WTF!!!\n\n\nXXXXXXXXXXXXXXXX\n\n");
	}
	return (int) seconds;
}
*/









void main()
{

	FILE *fp;
	fp = fopen("ctext.txt", "r");
	char buff[255];
	fgets(buff, 255, (FILE*)fp);
	printf("STRINGER: %s\n", buff);
	fclose(fp);
	int i, c, n;
	time_t t;
	srand((unsigned) time(&t));
	long r_letter;
	for (i = 0; i < 5; i++) {
		n = (rand() % 26);
		c = 97 + n;
		printf("%c\n", c);
	}


}
