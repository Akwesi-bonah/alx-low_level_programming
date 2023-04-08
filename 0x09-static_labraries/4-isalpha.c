# include "main.h"
/**
 * _isalpha - check for alphabetic charater
 * @c: the character to check
 * Return: 1 if character is lower or upper case else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
