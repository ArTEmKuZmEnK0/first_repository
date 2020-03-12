#include <stdio.h>

int main(void)
{
	int counter;
	int maximum;

	counter = 0;
	maximum = 10;

	while (counter <= maximum)
	{
		printf("%d\n", counter);
		counter++;
	}

	return (0);