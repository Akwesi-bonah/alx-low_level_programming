# include "main.h"
/**
 * _strlen - return lent of a string
 * @s : stirng to check
 * Return : the number of var a
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
