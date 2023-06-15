#include "lists.h"
/**
 * print_dlistint - Print all the element a list
 * @h: list to be printed
 *
 * Return: the number of nodes.
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int i;

	ptr = h;
	if (ptr == NULL)
		return (0);

	while (ptr->prev != 0)
		ptr = ptr->next;

	for (i = 0; ptr != NULL; i++)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
	}

	return (i);
}
