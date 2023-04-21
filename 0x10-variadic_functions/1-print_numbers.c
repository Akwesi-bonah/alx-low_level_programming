#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers thath is seperated by a seperator
 * @separator: seperator for the numbers
 * @n: number of argument passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(num);
}
