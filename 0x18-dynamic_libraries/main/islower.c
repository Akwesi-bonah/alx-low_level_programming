#include "main.h"

/**
 * _islower - Chect is a charater is a lower case.
 * @c: character
 * Return: 1 if the characte is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
