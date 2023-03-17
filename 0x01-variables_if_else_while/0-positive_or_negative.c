#include<stdio.sh>
#include<time.h>
/**
 * more header goes here
 *
 * Main  - Entry
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	if (n == 0)
	{
		prinf("%d is zero\n", n);
	}

	if (n < 0)
	{
		print("%d is negative\n", n);
	}

	return (0);
}
