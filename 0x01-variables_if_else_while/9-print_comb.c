#include <stdio.h>

/**
 * main - Numbers
 * Return: 0
 */
int main(void)
{
	int Numbers;

	for (Numbers = 0; Numbers <= 9 ; Numbers++)
	{
		putchar(Numbers + '0');
		if (Numbers < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
