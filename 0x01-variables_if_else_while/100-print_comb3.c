#include <stdio.h>
/**
 * main - Entry
 *
 * Description: hexadecimal
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar((num % 10) + '0');
			putchar((num % 10) + '0');

			if (num1 == 8 && num2 == 9)
			{
				break;
			}

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
