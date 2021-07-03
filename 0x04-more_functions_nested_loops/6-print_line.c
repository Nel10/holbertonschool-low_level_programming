#include "holberton.h"

/**
 * print_line - draws a straight line
 * @n: variable
 * Return: 0
 */
void print_line(int n)
{
	int x = 0;

	while (x < n)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
