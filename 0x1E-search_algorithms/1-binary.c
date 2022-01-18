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
	int flag = 0;

	if (array == NULL)
		return (-1);
	while (l < r)
	{
		printf("Searching in array: ");
		i = l;
		flag = 0;
		while (i <= r)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("%d", array[i]);
			flag = 1;
			i++;
		}
		printf("\n");
		mid = (l + r) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	printf("Searching in array: %d\n", array[mid + 1]);
	return (-1);
}
