#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a;
	float b;
	char c[13] = "podushka";
	char d[13] = "hello,world";
	int e[10] = {1, 2, 3, 4, 5};
	/* ============ */
	int g;
    int result;
    float resultat;

	a = 5;
	b = 5.1;
    g = 4;
    result = 0;
    resultat = 0;

    	printf(" a = %d \n\n", a);
	printf(" b = %f \n\n", b);

	write(1, &c, 1);
	printf("\n c = %s\n\n", c);

	printf("d =%s\n\n", d);
	printf("e =%d\n\n", e[3]);

	/* + */
	result = a + g;	
	printf("result =%d\n",result );
	/* - */
    result = a - g;
	printf("result =%d\n",result );
	/* * */
	result  = a * g;
	printf("result =%d\n",result );
	/* / */
    result = a %  g;
    printf("result =%d\n",result );
	/* % */
    resultat = b / a;
    printf("resultat =%f\n",resultat); 

	return (0);
}