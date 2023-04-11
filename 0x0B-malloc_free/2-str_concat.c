#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two string
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL if string is empty
 */

char *str_concat(char *s1, char *s2)
{
	char *cat_string;
	int i, j, len, s1_len, s2_len;

	s1_len = 0;
	s2_len = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[s1_len] != '\0')
		{
			s1_len++;
		}

		while (s2[s2_len] != '\0')
		{
			s2_len++;
		}
	}
	len = s1_len + s2_len + 1;
	cat_string = (char *)malloc(sizeof(char) * len);

	if (cat_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		cat_string[i] = s1[i];
	}
	for (j = 0; j < s2_len; j++, i++)
	{
		cat_string[i] = s2[j];
	}

	cat_string[i] = '\0';
	return (cat_string);
}
