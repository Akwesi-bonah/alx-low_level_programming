#include "search_algos.h"
/**
 * print_array - prints an array.
 * @array: array to print
 * @l: bottom of the array
 * @r: top of the array
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i < r)
			printf("%i, ", array[i]);
		else
			printf("%i\n", array[i]);
	}
}

/**
 * binary_search - Function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: Array where to search.
 * @size: size of the array.
 * @value: value to find.
 * Return: First index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1,  m = 0;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);

}
