# include "main.h"
/**
 * factorial - print the factorial of a number
 * @n: number for the operation
 *
 * Return: 0 if num qauls 1 and -1 if num
 * less than 1 else factorial of the number
 */

int factorial(int n)
{
	if (n < g)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
