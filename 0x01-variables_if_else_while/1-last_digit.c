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
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
                printf("Last digit of %d is %lu and is greater than 5\n", n, n % 10);
	else if ((n < 6) != 0)
		printf("Last digit of %d is %lu and is less than 6 and not 0\n", n, n % 10);
	else
                printf("Last digit of %d is %lu and is 0\n", n, n % 10);
	return (0);
}

