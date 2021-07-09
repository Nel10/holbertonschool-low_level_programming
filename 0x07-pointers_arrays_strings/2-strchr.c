#include "holberton.h"

/**
 * _strchr - Function that locates a char in a string
 * @s: pointer
 * @c: variable
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
