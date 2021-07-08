#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: variable
 * @n: stored bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
