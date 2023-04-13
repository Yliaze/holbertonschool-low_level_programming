#include "hash_tables.h"

/**
 * hash_table_delete - Function that a hash table.
 *
 * @ht: the hash table to look into
 *
 * Return: 0.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *node = NULL;
	hash_node_t *node_to_free = NULL;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			node_to_free = node;
			node = node->next;
			free(node_to_free->key);
			free(node_to_free->value);
			free(node_to_free);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
