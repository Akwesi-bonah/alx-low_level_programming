# include "main.h"
/**
 * _strlen_recursion - print lenght oa string
 * @s: string to find length
 *
 * Return: return lenght
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
