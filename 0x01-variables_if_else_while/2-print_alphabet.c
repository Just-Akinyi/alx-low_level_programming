#include <stdio.h>
/**
 *displays alphabets
 */
int main(void)
/**
* main - initiates the code
*
* @argument: it's an integer
*
* Return: 0 for failure and 1 for success
*/
{
	char c;
	
	for (c = 'a'; c <= 'z'; ++c)
		printf("%c", c);
	printf("\n");
	return (0);
}
