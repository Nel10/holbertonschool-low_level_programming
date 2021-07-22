#include "3-calc.h"

/**
 * main - program that performs simple operations.
 * @argc: argument count
 * @argv: argumet vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*x)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = get_op_func(argv[2]);
	if (x == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", x(a, b));
	return (0);
	exit(100);
}
