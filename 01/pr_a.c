#include <stdio.h>

int main(void)
{
	int counter;
	int maximum;

	counter = 97;
	maximum = 122;

	while (counter <= maximum)
	{
		printf("%d\n", counter);
		counter++;
	}

	return (0);
}