#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - creates array of chars
 *
 * @c - character to be allocated to array
 * @size - size of array
 *
 * return - array filled
 **/
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
