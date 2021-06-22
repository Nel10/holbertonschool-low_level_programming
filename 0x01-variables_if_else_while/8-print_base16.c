#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char x;

	x = '0';
	for (x = '0'; x <= '9'; x++)
	{
		putchar (x);
	}
	x = 'a';
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
