/* more headers goes there */

/* betty style doc for function main goes there */
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);

    if (n < 0)
        printf("%d is negative",n);
    else if (n > 0)
        printf("%d is positive",n);
    else
        printf("%d is zero",n);
    /* your code goes there */
	return (0);
}
