#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: const unsigned int
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list ap;
	int sum;

	va_start(ap, n);
	for (sum = 0; x < n; x++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
