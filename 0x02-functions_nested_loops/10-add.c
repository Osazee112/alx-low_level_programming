#include <stdio.h>
#include "main.h"

/**
 * program to print out the addition of two numbers
 */

int main()
{
	int a,b,n;
	n = add(a,b);
	printf("enter two numbers %d\n");
	scanf("%d,%d\n", &a,&b);
	printf("return %d\n",add(a,b));
	return (n);
}
 int add(int, int)
{
	return(a + b);
}

