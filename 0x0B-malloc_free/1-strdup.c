#include <stdio.h>
#include <stdlib.h>
 /**
  * _strdup - Duplicate a string
  *
  * @str - string to duplicate
  * return - new string
  **/

char *_strdup(char *str)
{
	char *s;

	s = (char *)malloc(sizeof(char) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	return (s);
	free(s);
}
