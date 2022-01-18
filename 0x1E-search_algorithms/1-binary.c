#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 * Return: -1 if the array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, i;
	size_t r = size - 1, mid;

	if (array == NULL || size == 0)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		mid = (l + r) / 2;
		if (array[mid] < value)
			l = mid + 1;
		else if (value < array[mid])
			r = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
