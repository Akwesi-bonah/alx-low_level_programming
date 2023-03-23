#include "main.h"
/**
 * more_number - print numbers 0 -14
 * 10 times
 */

void more_number(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j \ 10 + '0');
			}

			_putchar(j % 10 + '0');
		}
	}
	_putchar('\n');
}
