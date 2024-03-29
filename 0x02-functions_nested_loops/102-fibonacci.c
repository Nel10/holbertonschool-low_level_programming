#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int counter;
	long int curr = 2;
	long int prev = 1;
	long int sum = 0;

	printf("%lu, ", prev);
	printf("%lu, ", curr);
	for (counter = 3; counter < 51; counter++)
	{
		sum = prev + curr;
		prev = curr;
		curr = sum;
		if (counter < 50)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu\n", sum);
		}
	}
	return (0);
}
