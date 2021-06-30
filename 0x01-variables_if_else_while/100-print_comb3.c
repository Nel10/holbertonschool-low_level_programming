#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main -  all possible different combinations of two digits
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
			putchar (x);
			putchar (y);
			if (x <= '7' && y <= '9')
			{
				putchar (',');
				putchar (' ');
			}
			y++;
		}
		x++;
	}
	putchar ('\n');
	return (0);
}
