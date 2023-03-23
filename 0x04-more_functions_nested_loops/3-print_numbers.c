#include "main.h"
/**
 * print_number - print numbers from 0 - 9
 * print new line at end
 * Return: 0 Always
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

	return (0);
}
