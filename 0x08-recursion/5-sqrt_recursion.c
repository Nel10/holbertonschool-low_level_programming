#include "holberton.h"

/**
 * aux - The function sqrt.
 * @x: variable
 * @y: variable
 * Return: 0
 */
int aux(int x, int y)
{
	if ((y * y) < x)
	{
		return (aux(x, y + 1));
	}
	else if ((y * y) > x)
	{
		return (-1);
	}
	else
	{
		return (y);
	}
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: variable
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (aux(n, 1));
}
