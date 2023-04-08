# include "main.h"
/**
 * _strcmp - compare two string
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: -1 if s1 > s2 else 0 if s1 == s2 and 1 if s2 > s1
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}

		s1++;
		s2++;

	}

	return (*s1 - *s2);
}
