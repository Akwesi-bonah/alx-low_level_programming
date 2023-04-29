#include "lists.h"
/**
 * free_listint - is a function that frees a list_t list.
 * @head: linked list to free.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
