#include "holberton.h"

/**
 * _strspn - the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, i, j = 0;

	while (accept[x])
	{
		i = 0;
		while (s[i] != 32)
		{
			if (accept[x] == s[i])
			{
				j++;
			}
			i++;
		}
		x++;
	}
	return (j);
}

