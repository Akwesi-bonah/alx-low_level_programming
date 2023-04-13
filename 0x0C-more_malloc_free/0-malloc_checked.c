#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - locate memory
 * @b: number of byte
 *
 * Return: located memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
