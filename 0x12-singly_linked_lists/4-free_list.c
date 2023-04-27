#include "lists.h"
/**
 * free_list - is a function that frees a list_t list.
 * @head: linked list to free.
 */
void free_list(list_t *head)
{
	list_t *ptr, *ptr1;

	ptr = head;
	while (ptr != NULL)
	{
		ptr1 = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = ptr1;
		if (ptr != NULL)
			ptr1 = ptr1->next;
	}
}
