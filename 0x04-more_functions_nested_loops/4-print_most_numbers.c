#include "holberton.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: 0
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if (x != 50 && x != 52)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
