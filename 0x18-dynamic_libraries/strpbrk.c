#include "main.h"

/**
 * *_strpbrk - searches for a string
 * @s: string to search
 * @accept: string to look form
 *
 * Return: s if accept esle NULL
 */


char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
