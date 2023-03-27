# include "main.h"
/**
 * print_arry - print element in array
 * seperated by comma
 * @a: array tobe printed
 * @n: number of element to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}

		printf("\n");
	}
}
