#include "lists.h"
/**
 * free_listint2 - free list_t list.
 * @head: list to  be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}

	ptr = *head;
	while (ptr != NULL)
	{
		*head = (**head).next;
		free(ptr);
		ptr = *head;
	}
	*head = NULL;
}
