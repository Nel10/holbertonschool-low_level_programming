#include "main.h"

/**
 * print_alphabet_x10 - all alphabet in ten lines
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x;
	int j;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
