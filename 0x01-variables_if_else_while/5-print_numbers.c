#include <stdio.h>
/**
 * main - Entry
 * Description: print numbers from 0 - 9
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}

	putchar('\n');

	return (0);
}
