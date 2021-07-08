#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer
 * Return: 0
 */
void _puts_recursion(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
