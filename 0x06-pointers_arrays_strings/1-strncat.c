# include "main.h"
/**
 * _strncat - copies string
 * @dest: distination
 * @src: source
 * @n: number of byte
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i ;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest)
}


