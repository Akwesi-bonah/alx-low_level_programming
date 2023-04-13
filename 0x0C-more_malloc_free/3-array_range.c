#include <stdlib.h>
#include "main.h"
/**
 * array_range - create array of int
 * @min: lower point
 * @max: limit
 *
 * Return: array else NULL
 */

int *array_range(int min, int max)
{
	int *arr, i, len;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
