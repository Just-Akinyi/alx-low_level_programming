#include <stdio.h>
/**
 *displays alphabets
 */
int main(void)
/**
* main - outputs alphabets from "a" to "z"
*
* @argument: it's an integer
*
* Return: 0 for success
*/
{
	char c;
	for (c = 'a'; c <= 'z'; ++c)
		printf("%c", c);
	printf("\n");
	return (0);
}
