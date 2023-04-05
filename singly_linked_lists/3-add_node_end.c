#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 *
 * @head: The original linked list.
 * @str : The string to add to the node.
 *
 * Return: The address of a new elements or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *tmp;

	new = malloc(sizeof(list_t) * 1);
	if (new == NULL)
		return (NULL);

	tmp = *head;

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return(new);
}
