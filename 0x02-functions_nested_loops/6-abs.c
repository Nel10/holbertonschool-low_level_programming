#include "holberton.h"

/**
 * _abs - numbers positives
 * @n: variable
 *
 * Return: 0
 */
int _abs(int n)
{
	int x;

	if (n < 0)
	{
		x = (-1) * n;
		return (x);
	}
	else
	{
		return (n);
	}
}
