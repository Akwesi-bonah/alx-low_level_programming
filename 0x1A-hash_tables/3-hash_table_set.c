#include "hash_tables.h"
/**
 * add_node_hash - adds a node on a hash table.
 * @h: head of the node at index.
 * @key: key.
 * @value: value.
 * Return: the node of the index.
 */
hash_node_t *add_node_hash(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *n;

	n = *h;
	while (n != NULL)
	{
		if (strcmp(key, n->key) == 0)
		{
			free(n->value);
			n->value = strdup(value);
		}
		n = n->next;
	}
	if (n == NULL)
	{
		n = malloc(sizeof(hash_node_t));
		if (n == NULL)
			return (NULL);
		n->key = strdup(key);
		n->value = strdup(value);
		n->next = *h;
		*h = n;
	}
	return (*h);
}
