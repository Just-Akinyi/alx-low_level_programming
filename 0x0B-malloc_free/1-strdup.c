#include <stdio.h>
#include <stdlib.h>
 /**
  * _strdup - returns pointer to a new string
  *
  * @str - 
  * return - new string
  **/

char *_strdup(char *str);
{
	char *s;
	s = (char *)malloc(sizeof(char)) * (len + 1);
	if (str == NULL)
	{
		return NULL;
	}
	return(s);
	free(s);
}
