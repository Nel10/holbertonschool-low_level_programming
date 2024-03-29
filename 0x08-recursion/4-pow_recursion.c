#include "holberton.h"

/**
 * _pow_recursion - he value of x raised to the power of y
 * @x: variable
 * @y: variable
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
