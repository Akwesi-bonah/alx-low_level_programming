#include "lists.h"
/**
 * delete_dnodeint_at_index - Delets the nth node of a dlistint_t linked list
 * @head: linked list to print
 * @index: node to look for
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *idx, *before, *after;

	if (head == NULL || *head == NULL)
		return (-1);

	while ((**head).prev != NULL)
		*head = (**head).prev;
	idx = *head;
	if (index == 0)
	{
		idx = idx->next;
		if (idx != NULL)
			idx->prev = NULL;
		idx = *head;
		*head = idx->next;
	}
	else
	{
		for (i = 0; i != index && idx->next != NULL; i++)
			idx = idx->next;
		if (index > i)
			return (-1);
		before = idx->prev;
		after = idx->next;

		if (after == NULL)
			before->next = NULL;
		else
		{
			before->next = after;
			after->prev = before;
		}
	}
	free(idx);
	return (1);
}
