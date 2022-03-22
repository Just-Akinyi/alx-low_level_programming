#include <string.h>
#include "main.h"
/**
 * print_rev - Print a string in reverse
 * @s: string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
