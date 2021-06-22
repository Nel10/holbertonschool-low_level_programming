#include <stdio.h>

/**
 * main - Software is eating the World
 * Return: 0
 */
int main(void)
{
	int numbers = 122;

	while (numbers >= 97)
	{
		putchar(numbers);
		numbers--;
	}
	putchar('\n');
	return (0);
}
