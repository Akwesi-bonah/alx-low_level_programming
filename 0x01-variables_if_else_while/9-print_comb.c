#include <stdio.h>
/**
 * main - Entry
 *
 * Description: print numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');

		if (num == 9)
		{
			putchar('$');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
