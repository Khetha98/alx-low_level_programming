#include "lists.h"

/**
 * print_dlistint - print the elements of the dlistint_t list
 * @h: pointer to start of a linked list
 *
 * Return: returns the number of the nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
