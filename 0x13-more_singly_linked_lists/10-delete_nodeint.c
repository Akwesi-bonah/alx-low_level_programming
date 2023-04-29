#include "lists.h"
/**
 * delete_nodeint_at_index - Delete a node a specific position
 * @index: node for look up
 * @head: begining of list
 * Return: length
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pos, *old_list, *new_list;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		old_list = *head;
		*head = (**head).next;
		free(old_list);
		return (1);
	}

	pos = *head;
	for (i = 0; pos != NULL; i++)
	{
		pos = pos->next;
	}

	if (index > i)
	{
		return (-1);
	}
	old_list = *head;

	for (i = 0; i != index - 1; i++)
	{
		old_list = old_list->next;
	}

	pos = old_list->next;
	new_list = pos->next;
	old_list->next = new_list;
	free(pos);
	return (1);
}
