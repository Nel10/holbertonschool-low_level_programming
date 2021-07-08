#include "holberton.h"

/**
 * _memcpy - copies a memory area
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = src[i];
	return (dest);
}
