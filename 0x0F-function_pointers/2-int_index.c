#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: pointer int
 * @size: size array
 * @cmp: function pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	x = 0;
	while (x < size)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
		x++;
	}
	return (-1);
}
