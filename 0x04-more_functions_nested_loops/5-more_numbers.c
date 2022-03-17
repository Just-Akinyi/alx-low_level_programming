#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * @n: is the number of times to print
 * @x: is values to be printed
 */
void more_numbers(void)
{
	int n, x;

	for (n = 0; n < 10; n++)
	{
		for (x = 0; x < 15; x++)
		{
			if (n <9)
				_putchar(x);
			else
			{
				_putchar(x/10 + '0');
				_putchar(x%10 + '0');
			}
		}
	}
	_putchar('\n');
}
