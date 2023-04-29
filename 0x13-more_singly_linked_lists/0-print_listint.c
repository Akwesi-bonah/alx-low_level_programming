#include "lists.h"

/**
 * print_listint - print element of a list_t list
 * @h: linked list
 *
 * Return: lenght
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);

		h = h->next;
		i++;
	}

	return (i);
}
