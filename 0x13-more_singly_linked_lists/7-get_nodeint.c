#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of  listint_t linked list.
 * @index: node
 * @head: starter
 * Return: length
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}

	if (index > i)
	{
		return (NULL);
	}

	ptr = head;

	for (i = 0; i != index; i++)
	{
		ptr = ptr->next;
	}

	return (ptr);
}
