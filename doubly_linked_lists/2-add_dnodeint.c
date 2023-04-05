#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a
 * doubly linked list
 *
 * @head: The original doubly linked list.
 * @n : value to assign to new node.
 *
 * Return: The address of a new elements or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
