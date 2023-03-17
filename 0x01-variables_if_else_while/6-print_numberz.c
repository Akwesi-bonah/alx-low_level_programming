#include <stdio.h>
/**
 * main - Entry
 * Description: print numbers of char type
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	putchar('\n');

	return (0);
}
