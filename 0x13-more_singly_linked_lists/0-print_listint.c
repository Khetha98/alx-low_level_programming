#include "lists.h"
#include <stdio.h>

/**
 * print_listint - gives out elements for a singly linked list
 * @b: it a pointer to a list
 * Return: Integer.
 **/

size_t print_listint(const listint_t *b)
{
	const listint_t *tp;
	unsigned int cntr = 0;

	tp = b;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
}
