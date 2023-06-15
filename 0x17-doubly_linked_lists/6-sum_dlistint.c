#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t linked list
 * @head: linked list to print
 *
 * Return: the sum of all int data of the list
 */

int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *ptr;
	int i, sum = 0;

	ptr = head;
	if (ptr == NULL)
		return (0);

	while (ptr->prev != NULL)
		ptr = ptr->prev;

	for (i = 0; ptr != NULL; i++)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
