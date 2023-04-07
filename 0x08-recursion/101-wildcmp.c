# include "main.h"
/**
 * wildcmp - compares two string
 * @s1: string pointer
 * @s2: string pointer containing special character
 *
 * Return: 1 if the same, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
	{
		return (1);
	}

	if (!*s1 && *s2 == '*' && *(s2 + 1) == '\0')
	{
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		return (wildcmp((s1), (s2 + 1) )|| wildcmp((s1 + 1), s2));
	}

	return (0);
}
