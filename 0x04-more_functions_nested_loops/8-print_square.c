#include "holberton.h"

/**
 * print_square -  prints a square
 * @size: variable
 * Return: 0
 */
void print_square(int size)
{
	int x, y;

	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			_putchar('#');
			y = y + 1;
		}
		x = x + 1;
		_putchar('\n');
	}
}
