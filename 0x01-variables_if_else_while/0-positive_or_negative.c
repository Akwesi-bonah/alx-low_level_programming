#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * Description: check if a number is positive, zero or negative
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
