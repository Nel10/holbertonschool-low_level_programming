#include "holberton.h"

/**
 * num_prime - the input integer is a prime number
 * @x: variable
 * @y: variable
 * Return: 0
 */
int num_prime(int x, int y)
{
	if ((x % y == 0 && y < x) || x < 2)
		return (0);
	else if (x % y == 0 && y == x)
		return (1);
	else
		return (num_prime(x, y + 1));
}
/**
 * is_prime_number - function that return 1 or 0
 * @n: variable
 * Return: 0
 */
int is_prime_number(int n)
{
	return (num_prime(n, 2));
}
