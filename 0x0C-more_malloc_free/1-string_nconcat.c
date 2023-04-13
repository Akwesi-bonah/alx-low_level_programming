#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - join two string
 * @s1: first string
 * @s2: second string
 * @n: number of byte
 *
 * Return: NULL if fail else space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_ncat;
	unsigned int len, i, j;

	len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	str_ncat = malloc(sizeof(char) * (len + 1));

	if (str_ncat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i] != '\0'; i++)
		str_ncat[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
	{
		str_ncat[i] = s2[j];
	}

	str_ncat[i] = '\0';

	return (str_ncat);
}
