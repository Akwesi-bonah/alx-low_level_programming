#include "main.h"
/**
 * _memcpy - copy character from src to dest
 * @dest: destination
 * @src: source
 * @n: number of byte
 *
 * Retrun: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		dest[i] = src[i];
	}

	return (dest);
}
