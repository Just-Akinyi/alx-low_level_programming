#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - entry point
 *Description: tell if a number is positive, zero or negative
 *Return: Always return zero(0)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (n > 5)
                printf("Last digit of %d is %d and is greater than 5\n", n, a);
	if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	else if (n == 0)
                printf("Last digit of %d is %d and is \n", n, a);
	return (0);
}

