# include "main.h"
/**
 * puts2 - print one out of two character
 * @str: character to print
 */


void puts2(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
