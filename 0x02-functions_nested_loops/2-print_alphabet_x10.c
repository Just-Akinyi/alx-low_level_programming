#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * void: function takes no arguments
  * Return: void
  */
void print_alphabet_x10(void)
{
	char c;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}
}
