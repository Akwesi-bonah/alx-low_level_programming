#include "lists.h"
/**
 * reverse_listint - print list in reverse order
 * @head: begining of list
 * Return: head of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *check = NULL;


	if (head == NULL || *head == NULL)
	{
		return (*head);
	}

	while (ptr != NULL)
	{
		ptr = (**head).next;
		(**head).next = check;
		check = *head;
		*head = ptr;
	}

	*head = check;

	return (*head);
}
