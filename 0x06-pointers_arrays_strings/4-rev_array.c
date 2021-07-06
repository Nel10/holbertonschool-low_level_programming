#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @n: variable
 * @a: pointer
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int x, r;

	x = r = 0;
	n -= 1;
	while (x <= n)
	{
		r = a[n];
		a[n--] = a[x];
		a[x++] = r;
	}
}
