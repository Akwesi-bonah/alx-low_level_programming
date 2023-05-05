#include "main.h"

/**
 * _strlen - finds string length
 * @s: pointer to string
 *
 * Return: lenght
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * binary_to_uint - convert binary numbers to unsigned integers
 * @b: pointer to character
 *
 * Return: converted string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int length = _strlen(b);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		decimal += (b[i] - '0') << (length - i - 1);

	}

	return (decimal);
}

