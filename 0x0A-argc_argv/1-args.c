#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argv;
	for(i = 0; i < argc; i++)
		printf("%d\n", argc);

	return (0);
}
