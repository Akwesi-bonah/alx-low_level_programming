#include "main.h"
/**
 * _memset - copy files by constant
 * @s: variable to store
 * @b: variable to be copyed
 * @n: constant
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
