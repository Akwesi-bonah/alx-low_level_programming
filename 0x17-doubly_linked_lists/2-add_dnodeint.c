#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: linked list
 * @n: data of the node
 *
 * Return: new address of the element else NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	ptr = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}

	while (ptr->prev != NULL)
		ptr = ptr->prev;

	new->next = ptr;
	ptr->prev = new;
	*head = new;

	return (new);
}
