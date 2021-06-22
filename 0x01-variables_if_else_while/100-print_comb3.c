#include <stdio.h>

/**
 * main - two digits
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	x = '0';
	y = '1';
	while (x <= '8')
	{
		while (y <= '9')
		{
			putchar(x);
			putchar(y);
			putchar(',');
			putchar(' ');
			y = y + 1;
		}
		x = x + 1;
		y = x + 1;
	}
	putchar('\n');
	return (0);
}
