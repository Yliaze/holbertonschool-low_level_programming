#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 *
 * @head: The original doubly linked list.
 *
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *aux = NULL;

	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
	head = NULL;
}
