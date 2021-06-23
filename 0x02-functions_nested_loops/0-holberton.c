#include "holberton.h"

/**
 * main - print Holberton
 * Return: 0
 */

int main(void)
{
	int i;
	char a[] = "Holberton";

	for (i = 0 ; i < 9 ; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}
