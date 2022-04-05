#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - creates array of chars
 *
 * @c - character to be allocated memory
 * @size - size of character
 *
 * return - NULL(fail)
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;
	
	if (size == 0)
        {
                return (NULL);
        }
	s = (char*)malloc(sizeof(char));
	
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return(s);
}
