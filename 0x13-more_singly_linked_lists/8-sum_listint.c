#include "lists.h"
/**
 * sum_listint - returns the sum all element in listint_t linked list.
 * @head: begining.
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	size_t i = 0;
	listint_t *ptr;

	ptr = head;
	if (head == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		i += ptr->n;
		ptr = ptr->next;
	}

	return (i);
}
