# include <stdio.h>
# include "main.h"
/**
 * print_diagsums - print diagonal sum
 * @a: sqaure matrix
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum_1, sum_2;

	sum_1 = 0;
	sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 += a[(size * i) + i];
		sum_2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum_1, sum_2);
}
