#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _char - print char type
 * @sp: argument
 */
void _char(va_list sp)
{
	char a = va_arg(sp, int);

	printf("%c", a);
}

/**
 * _int - print integer type
 * @sp: argument
 */
void _int(va_list sp)
{
	int a = va_arg(sp, int);

	printf("%d", a);
}

/**
 * _float - print float type
 * @sp: argument
 */
void _float(va_list sp)
{
	float a = va_arg(sp, double);

	printf("%f", a);
}

/**
 * _string - print words
 * @sp: argument
 */

void _string(va_list sp)
{
	char *a = va_arg(sp, char *);
	
	if (a == NULL)
		printf("(nil)");
	printf("%s", a);
}

void print_all(const char * const format, ...)
{
}
