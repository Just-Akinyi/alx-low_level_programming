#include <stdio.h>
/**
 *displays alphabets
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		printf("%c", c);
	printf("\n");
	return (0);
}
