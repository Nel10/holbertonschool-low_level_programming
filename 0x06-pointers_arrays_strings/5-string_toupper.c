#include "holberton.h"

/**
 * string_toupper - function that changes all lowercase to uppercase.
 * @S: pointer
 * Return: 0
 */
char *string_toupper(char *S)
{
	int x;

	for (x = 0; S[x]; x++)
	{
		if (S[x] > 96 && S[x] < 123)
		{
			S[x] -= 32;
		}
	}
	return (S);
}
