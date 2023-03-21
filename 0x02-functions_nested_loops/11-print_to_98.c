# include <stdio.h>
# include "main.h"
/**
 * print_to_98 - print all natural number form n to 98
 * @n: starter value
 */

void print_to_98(int n)
{
	int i, j;

	if (n  <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (n == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j == 98)
			{
				printf("%d\n", j);
			}
			else
			{
				printf("%d, ", j);
			}
		}
	}
}

