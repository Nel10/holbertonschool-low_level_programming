#include "holberton.h"

/**
 */
void print_diagonal(int n)
{
	int x, y;

	x = 0;
	while (n > 0)
	{
		y = x;
		while (y > 0)
		{
			_putchar(' ');
			y--;
		}
		_putchar(92);
		_putchar('\n');
		x++;
		n--;
	}
	if (x < 1)
		_putchar('\n');
}
