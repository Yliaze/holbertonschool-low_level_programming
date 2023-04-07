#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 *
 * @h: The head of the linked list.
 * @idx: The position of the node to insert
 * @n: data in the new node
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp;
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	tmp = *h;

	if (*h != NULL)
	{

		while (*h)
		{
			if (i == idx)
			{
				new->n = n;
				new->prev = tmp;
				new->next = tmp->next;
				tmp->next->prev = new;
				tmp->next = new;
				return (*h);
			}
			tmp = tmp->next;
			i++;
		}
	}
	return (0);
}
