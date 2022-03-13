#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int y, z;

	for (y = 48; y < 58; y++)
	{
		for (z = 48; z < 58; z++)
		{
			putchar(y);
			putchar(z);
			if (y != 57 || z != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0)i;
}
