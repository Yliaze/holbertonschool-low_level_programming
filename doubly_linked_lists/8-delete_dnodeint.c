#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at a given position
 *
 * @head: The head of the linked list.
 * @index: The position of the node to delete
 *
 * Return: Returns: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *tmp2;
	unsigned int i = 0;

	tmp = *head;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (i < index && tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (i < index)
		return (-1);

	tmp2 = tmp->prev;
	tmp2->next = tmp->next;
	if (tmp->next == NULL)
	{
		tmp->next->prev = tmp2;
	}
	free(tmp);

	return (1);
}
