#include<stdio.h>

#include<math.h>

main()
{
	int num;

	scanf(“%d”,&num);
	int digits=log10(num)+1;

	printf("Number of digits=%d",digits);
}
