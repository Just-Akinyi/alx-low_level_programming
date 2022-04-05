#include<stdio.h>
#include<stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: The size of the array
  * @c: The char to fill in the array
  *
  * Return: The array filled
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = (char *)malloc(sizeof(char) * (size + 1));

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
