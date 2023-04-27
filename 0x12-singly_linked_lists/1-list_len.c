#include "lists.h"
/**
 * list_len - function that prints all  elements of a list_t list.
 * @h: linked list to count
 * Return: length of the list.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
