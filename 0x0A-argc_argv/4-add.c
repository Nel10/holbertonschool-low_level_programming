#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int number, digit, sum = 0;

	for (number = 1; number < argc; number++)
	{
		for (digit = 0; argv[number][digit]; digit++)
		{
			if (argv[number][digit] < '0' || argv[number][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[number]);
	}
	printf("%d\n", sum);
	return (0);
}
