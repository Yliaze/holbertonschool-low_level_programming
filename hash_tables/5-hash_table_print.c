#include "hash_tables.h"

/**
 * hash_table_print - Function that print a hash table
 *
 * @ht: the hash table to print
 *
 * Return: 0.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned int i = 0;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
