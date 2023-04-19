#include "function_pointers.h"
/**
 * int_index - funtion to search for int
 * @array: int array
 * @size: array size
 * @cmp: pointer funtion to compare values
 *
 * Return: -1 if no match or size <= 0 else index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
		{
			return (index);
		}
	}

	return (-1);
}
