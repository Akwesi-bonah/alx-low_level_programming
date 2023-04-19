#include "function_pointers.h"

/**
 * array_iterator - print element in an array
 * @array: array to iterate
 * @action: pointer function
 * @size: size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
