#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a
 * doubly linked list
 *
 * @head: The original linked list.
 * @n : value to assign to new node
 *
 * Return: The address of a new elements or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t) * 1);
	if (new == NULL)
		return (NULL);

	tmp = *head;

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new->prev = tmp;
	tmp->next = new;
	new->next = NULL;
	return (new);
}
