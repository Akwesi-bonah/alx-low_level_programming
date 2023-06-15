#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: list to be printed
 * @n: data of the node
 *
 * Return: total number of node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	new->prev = ptr;
	new->next = NULL;
	ptr->next = new;

	return (new);
}
