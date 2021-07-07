#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @c: pointer
 * Return: 0
 */
char *leet(char *c)
{
	int x, j;
	char abc[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (x = 0; c[x]; x++)
	{
		for (j = 0; abc[j]; j++)
			if (c[x] == abc[j])
				c[x] = num[j];
	}
	return (c);
}
