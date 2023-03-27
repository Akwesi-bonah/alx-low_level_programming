# include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer
 */

void rev_string(char *s)
{
	char var;
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i - 1;

	for (j = 0; j < len / 2; j++)
	{
		var = s[j];
		s[j] = s[len-j-1];
		s[len-i-1] = var;
	}
}
