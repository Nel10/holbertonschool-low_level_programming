#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: pointer
 * Return: 0
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i]; i++)
		;
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
			_putchar(str[j]);
	}
	else
		for (j = (i + 1) / 2; j < i; j++)
			_putchar(str[j]);
	_putchar('\n');
}
