# include "main.h"
/**
 * _memcpy - copy from one location to another
 * @dest: destination
 * @src: source
 * @n: number of byte
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

