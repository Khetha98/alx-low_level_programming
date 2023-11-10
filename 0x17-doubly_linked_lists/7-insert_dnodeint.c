#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts the new node at
 * the given position
 *
 * @h: is the head of a list
 * @idx: is index of a new node
 * @n: is value of a new node
 * Return: the address of a new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *current;
	unsigned int i;


	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = current;
		next = current->next;
		current->next = new;
	}

	new->next = next;

	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
