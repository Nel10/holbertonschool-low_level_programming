#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Last digit
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, x);
	}
	if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	if ((n % 10) < 6 && ((n % 10) != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
