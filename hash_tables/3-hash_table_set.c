#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 *
 * @ht: the hash table to add or update the key/value to
 * @key: the key (can't be empty)
 * @value: the value associated with the key (can be empty)
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	/* identification de la clè */
	index = key_index((unsigned char *)key, ht->size);

	/* Go à l'indice de la hashtable correspondant à la clé betty */
	node = ht->array[index];

	/* Parcourir la liste à l'index */
	while (node != NULL)
	{
		/* comparer notre clé à la clé de la nouvelle node */
		if (strcmp(node->key, key) == 0)
		{
			node->value = strdup(value); /* On change la value */
			return (1);
		}
		node = node->next;
	}

	/* si index pas dans liste on add la node et ses valeurs */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	/* maj du pointeur vers le noeud 1 de la liste qui contient la clé et la valeur. */
	ht->array[index] = node;

	return (1);
}
