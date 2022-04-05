#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *d;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	d = malloc(sizeof(char) * (len + 1));

	if (d == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		d[i] = str[i];

	d[len] = '\0';

	return (d);
}
