# include "main.h"
/**
 * puts_half - print half af string
 * followed by newline
 * @str: string to divide and print half
 */

void puts_half(char *str)
{
	int i, half, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	half = (i - 1) / 2;

	for (j = half + 1; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
