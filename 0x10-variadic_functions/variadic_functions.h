#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);

typedef struct variadic_function
{
	char *chr;
	void (*va_func)(va_list sp);
} d_t;

void _string(va_list sp);
void _char(va_list sp);
void _int(va_list sp);
void _float(va_list sp);

#endif
