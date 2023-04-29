#include "lists.h"
/**
 * listint_len - prints all the elements of a list_t list.
 * @h: linked list
 * Return: length
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
