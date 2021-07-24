#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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
int sum_them_all(const unsigned int n, ...);
int main(void);
void print_all(const char * const format, ...);
void print_char(va_list c);
void print_int(va_list i);
void print_float(va_list f);
void print_string(va_list s);
#endif
