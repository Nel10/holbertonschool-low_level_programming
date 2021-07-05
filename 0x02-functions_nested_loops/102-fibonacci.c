#include <stdio.h>
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
	for (counter = 3; counter < 44; counter++)
	{
		sum = prev + curr;
		prev = curr;
		curr = sum;
		if (counter < 43)
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
