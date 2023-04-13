#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value
 * associated with a key
 *
 * @ht: the hash table to look into
 * @key: the key we looking for
 *
 * Return: the value associated with the element
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
	}
	return (0);
}
