#include "lists.h"
/**
 * dlistint_len - Return the number of elemet in a list
 * @h: list to find lenght
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int i;

	ptr = h;
	if (ptr == NULL)
		return (0);
	while (ptr->prev != NULL)
		ptr = ptr->prev;

	for (i = 0; ptr != NULL; i++)
		ptr = ptr->next;
	return (i);
}
