#include <stdio.h>

int plus(int nb_1, int nb_2)
{
	int result;

	result = 0;
	result = nb_1 + nb_2;

	return(result);
}


int main(void)
{
	int a;
	int b;
	int result;

	a = 6;
	b = 42;
	result = 0;

	result = plus(a, b);
	printf("%d\n", result);

	return (0);
}