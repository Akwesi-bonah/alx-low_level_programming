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
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
