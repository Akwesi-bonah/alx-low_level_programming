# include "main.h"
/**
 * checker - checker if a number is a prime number
 * @n: number to check
 * @i: helper variable
 *
 * Return: 1 if true else 0
 */

int checker(int n, int i)
{
	if (n == 1)
	{
		return (1);
	}

	if (i > 0 && n % i == 0)
	{
		return (0);
	}

	return (checker(n, (i - 1)));
}

/**
 * is_prime_number - checker for prime number
 * @n: number to checker
 *
 * Return: 1 if true else 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (checker(n, (n - 1)));
}

