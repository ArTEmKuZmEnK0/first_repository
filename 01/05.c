#include <stdio.h>

void add_two(int n) 
{
	int counter;
	int current_nb;

	counter = 0;
	current_nb = 0;

	while (counter < n)
    { 

    	current_nb = counter * 2;
    	printf("%d", current_nb);
        counter++; 
    }     
        printf("\n");

}
	int main(void)

{
    int n = 15;

    add_two(n);

    return(0);
}