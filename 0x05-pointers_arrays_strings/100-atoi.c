#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer
 * Return: 0
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int numb = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			numb = (numb * 10) + (*s - '0');
		else if (numb > 0)
			break;
	} while (*s++);
	return (numb * sign);
}
