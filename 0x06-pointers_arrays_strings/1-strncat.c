#include "holberton.h"

/**
 * *_strncat - function that concatenates two strings.
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x]; x++)
		;
	for (y = 0; src[y] && n > 0; y++, n--)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}
