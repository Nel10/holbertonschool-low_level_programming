#include "holberton.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: variable
 * Return: 0
 */
int factorial(int n)
{
	int x;

	if (n == 0)
		x = 1;
	else if (n < 0)
		x = -1;
	else
		x = n * factorial(n - 1);
	return (x);
}
