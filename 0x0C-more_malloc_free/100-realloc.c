#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory using malloc and free.
 * @ptr: pointer to previously allocated memory
 * @old_size: size of  ptr
 * @new_size: size of new space
 *
 * Return: newly allocated memory else NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;
	char *old = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		p[i] = old[i];
	free(ptr);
	return (p);
}
