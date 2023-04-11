#include "main.h"
#include <stdlib>
/**
 * create_array - create array of a giving size
 * @size: size of the array to be created
 * @c: character of the array
 *
 * Return: NULL if size of 0 else return array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = char *malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
