#include "lists.h"
/**
 * pop_listint - function that delete the head node
 * @head: begin of linked list.
 * Return: Head node's data.
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}

	ptr = *head;
	i = ptr->n;

	*head = (**head).next;
	free(ptr);
	return (i);
}
