#include "holberton.h"

/**
 * _islower - show it lowercase
 * @c: variable
 * Return: 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}