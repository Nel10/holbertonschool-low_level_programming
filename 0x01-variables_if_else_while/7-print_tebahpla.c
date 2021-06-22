#include <stdio.h>

/**
 * main - The lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char x;

	x = 'z';

	for (x = 'z' ; x >= 'a' ; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
