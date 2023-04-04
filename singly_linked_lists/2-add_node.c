#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 *
 * @head: The original linked list.
 * @str : The string to add to the node.
 *
 * Return: The address of a new elements or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
