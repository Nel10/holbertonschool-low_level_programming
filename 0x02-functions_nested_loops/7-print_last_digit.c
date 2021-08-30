#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: variable
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
	{
		_putchar(-x + '0');
		return (-x);
	}
	else
	{
		_putchar(x + '0');
		return (x);
	}
}
