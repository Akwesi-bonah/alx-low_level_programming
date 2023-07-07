#include "hash_tables.h"
/**
 * hash_table_get - function that returns  a value of a key
 * @ht: hash table
 * @key: key
 * Return: value or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *n;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	n = ht->array[index];

	while (n != NULL)
	{
		if (strcmp(n->key, key) == 0)
			return (n->value);
		n = n->next;
	}
	return (NULL);
}
