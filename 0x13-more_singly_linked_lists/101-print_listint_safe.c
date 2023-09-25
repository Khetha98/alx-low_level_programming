#include "lists.h"

/**
 * print_listint_safe - Prints the listint_t list safely.
 * @head: A pointer to  head of a listint_t list.
 *
 * Return: The number of the nodes at the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
