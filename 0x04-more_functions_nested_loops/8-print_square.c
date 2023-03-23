# include "main.h"
/**
 * print_square - print square of a number
 * @size: limit
 */

void print_square(int size)
{
	int i, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
