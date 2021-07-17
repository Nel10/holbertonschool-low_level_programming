#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: variable
 * @max: variable
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *array = NULL;
	int x, y, count;

	count = 0;
	if (min > max)
		return (NULL);
	y = (max - min) + 1;
	array = malloc(y * sizeof(int));
	if (!array)
		return (NULL);
	if (array != NULL)
	{
		for (x = min; x <= max; x++)
		{
			array[count] = x;
			count++;
		}
		return (array);
	}
	return (NULL);
}
