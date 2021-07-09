#include "holberton.h"

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: pointer
 * @size: variable
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, y, p, l = 0, r = 0;

	for (x = 0; x < size; x++)
	{
		p = (x * size) + x;
		l += *(a + p);
	}
	for (y = 0; y < size; y++)
	{
		p = (y * size) + (size - 1 - y);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
