#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: variable
 * Return: 0
 */
void print_triangle(int size)
{
	int x, y, z;

	x = 0;
	y = size - 1;
	while (x < size)
	{
		y = size - 1 - x;
		z = x + 1;
		while (y > 0)
		{
			_putchar(' ');
			y--;
		}
		while (z > 0)
		{
			_putchar('#');
			z--;
		}
		_putchar('\n');
		x++;
	}
	if (size <= 0)
		_putchar('\n');
}
