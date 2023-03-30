i include "main.h"
/**
 * string_toupper - change a string from lowercase top uppercase
 * @s: string to change
 *
 * Return: the string result
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
