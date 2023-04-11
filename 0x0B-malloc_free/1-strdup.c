#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return a copy of string parameter
 * @str: character string
 *
 * Return: copy of string
 */

char _strdup(char *str)
{
	char *new_str;
	int i;
	int j = 0;



	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		j++;
	}

	j = j + 1;


	new_str = (char *)malloc(sizeof(char) * j);

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';

	return (new_str);
}


