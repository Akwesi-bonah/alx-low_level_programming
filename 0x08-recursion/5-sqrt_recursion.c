# include "main.h"

/**
 * checker - check th number
 * Description: sqaure root of number
 * @n: int
 * @a: int for checker
 *
 * Return: checker
 */

int checker(int n, int a);

/**
 * _sqrt_recursion - print square root of a number
 * @n: number for operation
 *
 * Return: sqaure root of n
 */

int _sqrt_recursion(int n)
{
	return (checker(n, 1));
}


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
