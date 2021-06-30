#include "holberton.h"

/**
 * _puts - prints a string
 * @str: pointer
 * Return: 0
 */
void _puts(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
		_putchar(str[x]);
	}
	_putchar('\n');
}
