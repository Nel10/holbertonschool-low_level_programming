#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: pointer
 * Return: 0
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	{
		for (x--; s[x] >= 0; x--)
		{
			_putchar(s[x]);
		}
		_putchar('\n');
	}
}
