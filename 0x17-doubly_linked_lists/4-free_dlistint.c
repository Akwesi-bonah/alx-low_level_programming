#include "lists.h"
/**
 * free_dlistint - Returns the number of elements in a linked dlistint_t list
 * @head: list to print
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;

	ptr = head;

	while (ptr->prev != NULL)
		return;

	ptr = head;
	while (ptr->prev != NULL)
		ptr = ptr->prev;

	while (ptr != NULL)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
