# include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer
 */

void rev_string(char *s)
{
	char var;
	int i, j, len, end;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	end = i - 1;

	for (j = 0; j < end / 2; j++)
	{
		var = s[j];
		s[j] = s[end];
		s[len--] = var;
	}
}
