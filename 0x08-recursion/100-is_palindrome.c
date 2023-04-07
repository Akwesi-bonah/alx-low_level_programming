# include "main.h"
/**
 * _strlen_recursion - find lenght
 * @s: string pointer
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}

	return (1 + _strlen_recursion(++s));
}
/**
 * cmp - compare in reverse
 * @s: string pointer
 * @i: index
 *
 * Return: i if equal, if less 1 else 0
 */

int cmp(char *s, int i)
{
	if (*s == *(s + i))
	{
		return (cmp(s + 1, i - 2));
	}
	if (i < 1)
	{
		return (1);
	}

	return (0);
}
/**
 * is_palindrome - check if reversed string
 * is the same as intila string
 * @s: string tho check
 *
 * Return: 1 is true else 0
 */

int is_palindrome(char *s)
{
	int size = _strlen_recursion(s);

	return (cmp(s, size - 1));
}
