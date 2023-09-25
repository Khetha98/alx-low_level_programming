#include "lists.h"

/**
 * print_listint_safe - prints the linked list, safely
 * @h: list of type listint_t to be printed
 *
 * Return: the number of nodes of the list
 */

size_t print_listint_safe(const listint_t *h)
{
	size_t num = 0;
	long int diff;

	while (h)
	{
		diff = h - h->next;
		num++;
		printf("[%p] %d\n", (void *)h, h->n);
		if (diff > 0)
			h = h->next;
		else
		{
			printf("-> [%p] %d\n", (void *)h->next, h->next->n);
			break;
		}
	}

	return (num);
}
