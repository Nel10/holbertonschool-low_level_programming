#include "holberton.h"

/**
 * _strcmp - function that compares two strings
 * @s1: pointer
 * @s2: poiter
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x]; x++)
		;
	return (s1[x] - s2[x]);
}
