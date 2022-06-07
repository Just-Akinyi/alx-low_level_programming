#include "main.h"

/**
  * _isdigit - Check if a character is a digit
  * @c: The integer to be checked
  *
  * Return: 1 if digit 0 otherwise 
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
