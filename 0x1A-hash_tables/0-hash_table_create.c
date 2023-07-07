#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 * @size: size of the hash table
 * Return: a pointer to the newly created hash table
 * If something went wrong, the function return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **new_node;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	new_node = malloc(sizeof(hash_node_t *) * size);
	if (new_node == NULL)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = new_node;
	for (i = 0; i < size; i++)
		new_node[i] = NULL;
	return (new_table);
}
