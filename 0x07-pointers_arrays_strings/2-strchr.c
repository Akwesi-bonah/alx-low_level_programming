# include "main.h"
/**
 * _strchr - locate string character
 * @s: string to search from
 * @c: charcter to find
 *
 * Return: c if found else NUll
 */

char *strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s -1);
		}

		if (a == 0)
		{
			return (NULL);
		}

	}
}
