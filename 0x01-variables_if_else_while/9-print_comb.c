#include <stdio.h>

/**
 * main - Numbers
 * Return: 0
 */
int main(void)
{
	int N;

	for (N = 0; N <= 9 ; N++)
	{
		putchar(N + '0');
		if (N < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
