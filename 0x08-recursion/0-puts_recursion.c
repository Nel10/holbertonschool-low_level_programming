#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
