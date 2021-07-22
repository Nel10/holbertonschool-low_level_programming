#include "function_pointers.h"

/**
 * array_iterator - given as a parameter on each element of an array.
 * @array: int of arrays
 * @size: size of array
 * @action: size of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
