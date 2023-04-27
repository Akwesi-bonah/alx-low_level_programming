#include "lists.h"
/**
 * add_node - function to adds a new node to the beginning of a list
 * @head:  add the node
 * @str: character to add
 * Return: adress of new head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		;
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
