#include "holberton.h"

/**
 * rev_string -  reverses a string
 * @s: pointer
 * Return: 0
 */
void rev_string(char *s)
{
	int i, j, k;
	char l;

	for (i = 0; s[i]; i++)
		;
	k = i;
	for (i--, j = 0; j < k / 2; i--, j++)
	{
		l = s[j];
		s[j] = s[i];
		s[i] = l;
	}
}
