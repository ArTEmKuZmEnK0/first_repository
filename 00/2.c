#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int op_1;
	int op_2;

	op_1 = 0;
	op_2 = 0;

	printf("First number is random!\n");
	op_1 = rand();
	if (op_1 > 1000)
	{
		op_1 = op_1 % 1000;
	}
	printf("op_1 = %d\n", op_1);

	printf("Second number is also random!\n");
	op_2 = rand();
	if (op_2 > 1000)
	{
		op_2 = op_2 % 100;
	}
	printf("op_2 = %d\n", op_2);

	printf("Look what i can do with your numbers!\n");
	/* + */
	printf("%d + %d = %d\n", op_1, op_2, (op_1 + op_2));
	/* - */
    printf("%d - %d = %d\n", op_1, op_2, (op_1 - op_2));
	/* * */
    printf("%d * %d = %d\n", op_1, op_2, (op_1 * op_2));
	/* / */
    printf("%d / %d = %d\n", op_1, op_2, (op_1 / op_2));
	/* % */
    printf("%d  & %d = %d\n", op_1, op_2, (op_1 %  op_2));

	printf("Bye!!!\n");
	return (0);
}