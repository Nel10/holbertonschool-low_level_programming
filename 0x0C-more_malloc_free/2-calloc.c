#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: size the array
 * @size: size the type
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int x;
	unsigned int y;
	char *s;

	if (size == 0 || nmemb == 0)
		return (NULL);
	y = nmemb * size;
	array = malloc(y);
	s = (char *)array;
	if (s != NULL)
	{
		for (x = 0; x < y; x++)
			s[x] = 0;
		return (s);
	}
	return (NULL);
}
