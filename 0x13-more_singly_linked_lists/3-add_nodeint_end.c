#include "lists.h"
/**
 * add_nodeint_end - is  a function that adds a new node at the end of a list.
 * @head: where to add the node.
 * @n: int to add.
 * Return: the adress of new head node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *help;

	help = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	if (help == NULL)
	{
		*head = new;
	}
	else
	{
		while (help->next != NULL)
		{
			help = help->next;
		}
		help->next = help;
	}
	return (*head);
}
