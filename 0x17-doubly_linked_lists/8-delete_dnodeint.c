#include "lists.h"


/**
 * delete_dnodeint_at_index - Delete the n in nth index
 *
 * @head: is the Head of n
 *
 * @index: is index
 *
 * Return: returns 1 succeed, else -1 if fail
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *n;
	unsigned int c;

	if (*head == NULL)
		return (-1);
	n = *head;
	if (index == 0)
	{
		*head = n->next;
		if (n->next != NULL)
		{
			n->next->prev = NULL;
		}
		free(n);
		return (1);
	}

	for (c = 0; n != NULL && c < index - 1 ; c++)
	{
		n = n->next;
	}
	if (n == NULL || n->next == NULL)
	{
		return (-1);
	}
	if (n->next->next != NULL)
	{
		n->next = n->next->next;
		free(n->next->prev);
		n->next->prev = n;
		return (1);
	}
	else
	{
		free(n->next);
		n->next = NULL;
		return (1);
	}

	return (-1);
}
