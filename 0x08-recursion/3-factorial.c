#include "holberton.h"

/**
 */
int factorial(int n)
{
	int x;

	if (n == 0)
	{
		x = 1;
	}
	else if (n < 0)
	{
		x = -1;
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
