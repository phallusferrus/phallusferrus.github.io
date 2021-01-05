#include<stdio.h>

int report(int var, int p) {

	printf("var: %d\n", var);
	printf("*p: %d\n", p);
	return 0;

}

int increment(int *p) {

	*p += 1;

	return 0;
}




int main() {

	int var = 5;

	int *p = &var;

	report(var, *p);

	increment(p);

	report(var, *p);



	return 0;

}


