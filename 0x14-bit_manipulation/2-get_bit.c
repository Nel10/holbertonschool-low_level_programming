#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to set
 * @index: position to set
 * Return: The value of the bit at index index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = 64;

	if (index <= bits)
	{
		return ((n >> index) & 1);
	}
	return (-1);
}
