#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: linked list to print
 * @index: mode to look for
 *
 * Return: the node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	ptr = head;

	if (ptr == NULL)
		return (NULL);

	while (ptr->prev != NULL)
		ptr = ptr->prev;

	for (i = 0; i != index && ptr != NULL; i++)
		ptr = ptr->next;
	if (index > i)
		return (NULL);
	return (ptr);
}
