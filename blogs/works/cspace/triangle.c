#include<stdio.h>


void trian()
{
	printf("     /|\n");
	printf("    / |\n");
	printf("   /  |\n");
	printf("  /   |\n");
	printf(" /    |\n");
	printf("/_____|\n");
}

void reader()
{
	char toread[20];
	printf("Please enter whatevs: ");
	fgets(toread, 20, stdin);
	printf("\nYou entered: %s", toread);
}


void ctri()
{
	printf("CTRI!\n");
	int height;
	int counter = 0;
	int position = 0;
	printf("Please, how bit of a triangle?\n");
	scanf("%d", &height);
	while (height >= counter) {
		if (counter == 0 ) {
			printf("\n");
			counter++;
		} else {
			for (position = 0; position < counter; position++) {
				printf("x");
			}
			printf("\n");
			counter++;
		}
	}
}





int main() 
{
	ctri();
	reader();
	int age;
	char name[20];
	printf("Please eneter your age: ");
	scanf("%d", &age);
	printf("\nRecieved: %d\n", age);
	printf("\nPlease enter your name: ");
	fgets(name, 20, stdin);
	printf("\nHello %s you are %d years old!\n", name, age);
	printf(" x\n");
	printf(" xx\n");
	printf(" xxx\n");
	printf(" xxxx\n");
	printf(" xxxxx\n");
	printf(" xxxxxx\n");
	printf(" xxxxxxx\n");
	trian();
	return(0);
}
