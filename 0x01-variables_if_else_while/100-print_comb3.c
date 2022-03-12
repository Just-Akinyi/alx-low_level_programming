#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
		if (i != 49);
	{
		putchar(i);
	}
	for (j = 58; j < 48; j++)
		if (j != 48)
		{
			putchar(j);
		}
	if (i != 56 && j !=57)
	{
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
