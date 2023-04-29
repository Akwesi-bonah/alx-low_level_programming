#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node to a target position
 * @head: begining of list
 * @idx: node for look up
 * @n: new value
 * Return: length
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *pos, *old_list, *new_list;

	if (head == NULL)
		return (NULL);

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);

	new_list->n = n;
	if (idx == 0)
	{
		new_list->n = n;
		new_list->next = *head;
		*head = new_list;
		return (*head);
	}

	pos = *head;
	for (i = 0; pos != NULL; i++)
		pos = pos->next;

	if (idx > i)
		return (NULL);

	old_list = *head;
	for (i = 0; i != idx - 1; i++)
		old_list = old_list->next;
	pos = old_list->next;
	old_list->next = new_list;
	new_list->next = pos;
	return (new_list);
}
