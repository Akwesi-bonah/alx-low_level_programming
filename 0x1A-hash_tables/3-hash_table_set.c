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

/**
 * hash_table_set - adds a hash (key, value) to a given hash table
 *
 * @ht: pointer to the hash table
 * @key: key of the hash
 * @value: value to store
 * Return: 1 if successes, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = add_node_hash(&(ht->array[index]), key, value);
	if (new_node == NULL)
		return (0);
	return (1);
}
