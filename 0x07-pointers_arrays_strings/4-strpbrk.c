#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer
 * @accept: pointer
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x])
	{
		y = 0;
		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				s += x;
				return (s);
			}
			y++;
		}
		x++;
	}
	return ('\0');
}
