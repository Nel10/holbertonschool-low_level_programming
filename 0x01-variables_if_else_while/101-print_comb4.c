#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - possible different combinations of three digits.
 * Return: 0
 */

int main(void)
{
	int x = '0';

	while (x < '9')
	{
		int y = x + 1;

		while (y <= '9')
		{
			int z = y + 1;

			while (z <= '9')
			{
				putchar (x);
				putchar (y);
				putchar (z);
				if (x <= '6' && y <= '9')
				{
					putchar (',');
					putchar (' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar ('\n');
	return (0);
}
