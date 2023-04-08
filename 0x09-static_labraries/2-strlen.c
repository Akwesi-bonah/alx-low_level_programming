# include "main.h"
/**
 * _strlen - return lent of a string
 * @s: string to check
 *
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
