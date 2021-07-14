#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: pointer
 * @s2: pointer
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int x, y, z, w;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0';  x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	a = malloc((x * sizeof(*s1)) + (y * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);
	for (z = 0, w = 0; z < (x + y + 1); z++)
	{
		if (z < x)
			a[z] = s1[z];
		else
			a[z] = s2[w++];
	}
	return (a);
}
