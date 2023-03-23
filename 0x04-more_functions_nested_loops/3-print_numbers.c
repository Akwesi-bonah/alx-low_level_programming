#include "main.h"
/**
 * print_numbers - print numbers from 0 - 9
 * print new line at end
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
