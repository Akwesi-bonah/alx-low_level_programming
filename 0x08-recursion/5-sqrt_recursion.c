# include "main.h"
/**
 * _sqrt_recursion - print square root of a number
 * @n: number for operation
 *
 * Return: sqaure root of n
 */


int checker(int n, int a);

int _sqrt_recursion(int n)
{
	return (checker(n, 1));
}

/**
 * checker - _sqrt_recursion
 * @n: int
 * @a: int for checker
 *
 * Return: checker
 */


int checker(int n, int a)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((a * a) > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
	return (checker(n, a + 1));
}
