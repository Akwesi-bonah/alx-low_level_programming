# include "main.h"
/**
 * _pow_recursion - print x raised to power y
 * @x: value to raise
 * @y: value of power
 *
 * Return: -1 if y less than 0 else x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
