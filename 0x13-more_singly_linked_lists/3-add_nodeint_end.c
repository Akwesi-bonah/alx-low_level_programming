#include "lists.h"
/**
 * add_nodeint_end - is  a function that adds a new node at the end of a list.
 * @head: where to add the node.
 * @n: int to add
 * Return: the adress of new head node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list, *help;

	help = *head;
	list = malloc(sizeof(listint_t));

	if (list == NULL)
	{
		return (NULL);
	}

	list->n = n;
	if (help == NULL)
	{
		*head = list;
	}
	else
	{
		while (help->next != NULL)
			help = help->next;
		help->next = list;
	}
	return (*head);
}
