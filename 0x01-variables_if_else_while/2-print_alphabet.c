#include <stdio.h>
/*
 *displays alphabets
 */
int main(void)
{
	char c;
/*to display alphabets
 * prints "a-z"
 * in small letters
 */
	for (c = 'a'; c <= 'z'; ++c)
		printf("%c", c);
	printf("\n");
	return (0);
}
