#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer
 * Return: 0
 */
void _strlen_recursion(char *s)
{
	int x = 0;

	if (*s == '\0')
		return (0);
	x = 1 + _strlen_recursion(s + 1);
	return (x);
}
