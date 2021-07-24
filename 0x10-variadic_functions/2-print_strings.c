#include "variadic_functions.h"

/**
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list string;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char*);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	_putchar('\n');
	va_end (string);
}
