
#include<stdio.h>


int main()
{

	char name[20];
	char prof[20];
	char food[20];
	char music[20];
	char town[20];
	char animal[20];
	char tv[20];
	char verb[20];
	char clothes[20];
	char emot[20];




	printf("Please enter a name:	");
	fgets(name, 20, stdin);
	printf("\nPlease enter a profesion:	");
	fgets(prof, 20, stdin);
	printf("\nPlease enter a food:	");
	fgets(food, 20, stdin);
	printf("\nPlease enter a music:	");
	fgets(music, 20, stdin);
	printf("\nplease enter a town:	");
	fgets(town, 20, stdin);
	printf("\nPlease enter an animal:	");
	fgets(animal, 20, stdin);
	printf("\nplease enter a tv show or movie:	");
	fgets(tv, 20, stdin);
	printf("\nplease enter a verb (-ing):	");
	fgets(verb, 20, stdin);
	printf("\nplease enter a clothes:	");
	fgets(clothes, 20, stdin);
	printf("\nplease enter an emotion:	");
	fgets(emot, 20, stdin);
	printf("\n%s is a %s. He spends all his money eating %s and never has time to listen to %s. He lives alone in %s where his neighbors, Joe and Nancy, have a %s farm. At night %s watches %s and does his %s before going to bed. In the morning %s wakes up, puts on his %s and goes back to work as a %s. This all makes %s feel very %s.\n", name, prof, food, music, town, animal, name, tv, verb, name, clothes, prof, name, emot);
	return 0;

}
