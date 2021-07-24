#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - function that prints anything
 * @n: const unsigned int
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...);

/**
 * main - heck the code for Holberton School students.
 * Return: 0
 */
int main(void);
/**
 * struct impre - struct
 * @t: char
 * @f: function
 */
typedef struct impre
{
	char *t;
	void (*f)(va_list);
} impresion;

/**
 * print_char - print char
 * @c: char
 * Return: 0
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - print int
 * @i: int
 * Return: 0
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - print float
 * @f: float
 * Return: 0
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - print s
 * @s: string
 * Return: 0
 */
void print_string(va_list s)
{
	char *out = va_arg(s, char *);

	if (out == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", out);
	}
}
#endif
