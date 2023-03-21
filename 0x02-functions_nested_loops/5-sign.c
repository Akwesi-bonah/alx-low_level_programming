# include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: the number to be checked
 * Return: 1 if positive  0 else if zero -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('-');
		return (0);
	} else if (n < 0)
	{
		_putchar(45);
	}
	return (-1);
}
