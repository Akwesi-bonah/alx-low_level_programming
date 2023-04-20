#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sum up all numbers passed as argument
 * @n: total number of argument
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int i, sum = 0;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}

	va_end(num);

	return (sum);
}
