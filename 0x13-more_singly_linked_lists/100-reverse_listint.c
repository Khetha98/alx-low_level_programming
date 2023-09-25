#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @h: pointer the first node of the list
 *
 * Return: pointer to the first node to the list
 */

listint_t *reverse_listint(listint_t **h)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*h)
	{
		next = (*h)->next;
		(*h)->next = prev;
		prev = *h;
		*h = next;
	}

	*h = prev;

	return (*h);
}
