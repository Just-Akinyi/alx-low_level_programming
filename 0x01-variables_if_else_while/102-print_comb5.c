#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int v, w, y, z;

	for (v = 48; v < 58; v++)
	{
		for (w = 48; w < 57; w++)
		{
			for (y = 48; y < 58; y++)
			{
				for (z = 49; z < 58; z++)
					{
						putchar(v);
						putchar(w);
						putchar(32);
						 if ((y > v) || ((y == v) && (z > w)))
						 {
							 putchar(y);
							 putchar(z);
						 }
					else if (v != 57 || w != 56 || y != 57 || z != 57)
						{
							putchar(44);
							putchar(32);
						}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
