#include "main.h"
#include <stdlib.h>
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

/**
 * _calloc - allocate memory for array
 * @nmemb: size of array
 * @size: of element
 *
 * Return: new memory else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(nmemb * size);
	if (mem == NULL)
	{
		return (NULL);
	}

	_memset(mem, 0, nmemb * size);

	return (mem);
}
