#include <string.h>
#include "main.h"
/**
 *rev_string - Print a string in reverse
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}}
