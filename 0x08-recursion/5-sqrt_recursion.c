#include "main.h"

/**
 * helper - helps decide if i am right
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root
 */

int helper(int i, int n)
{
	int j;

	if (i * i! = n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = helper(i + 1,n);
		return (j + 1);
	}
	return (0);
}
