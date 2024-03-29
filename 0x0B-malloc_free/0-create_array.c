#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size of array
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(*s));
	if (s == NULL)
		return (NULL);
	for (x  = 0; x < size; x++)
		s[x] = c;
	return (s);
}
