#include <stdio.h>
#include "main.h"

/**
 * program to print out the addition of two numbers
 */

int main()
{
	int a,b,n;
	a = 40;
	b = 30;
	n = add(a,b);
	printf("enter number:%d,%d\n",a,b);
	scanf("%d,%d\n", &a,&b);
	printf("return %d\n",add(a,b));
	return (n);
}

