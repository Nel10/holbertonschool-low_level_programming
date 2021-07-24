#include "variadic_functions.h"

/**
 * print_all - Write a function that prints anything.
 * @format: const
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int j = 0;
	char *separador = "";

	impresion valores[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"f", print_float},
		{NULL, NULL}
	};
	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (valores[j].t != NULL)
		{
			if (*(valores[j].t) == format[i])
			{
				printf("%s", separador);
				valores[j].f(ap);
				separador = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
