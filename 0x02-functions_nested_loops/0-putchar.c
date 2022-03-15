#include <stdio.h>
#include "main.h"

/**
 * main - Prints _putchar followed by a new line character
 *
 * Return: zero (0) success
 */

void main(char *ch)
{
	while(*ch)
	{
		putchar(*ch);
	}
	return (0);
}
