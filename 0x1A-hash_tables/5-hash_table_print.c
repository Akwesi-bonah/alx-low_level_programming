#include "hash_tables.h"
/**
 * hash_table_print - prints the hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *n;
	char *s = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		n = ht->array[i];
		for (j = 0; n != NULL; j++)
		{
			printf("%s'%s': '%s'", s,  n->key, n->value);
			s = ", ";
			n = n->next;
		}
	}
	printf("}\n");
}
