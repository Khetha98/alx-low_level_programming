#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all of the data (n) in the list.
 * @head: Address of the first node of a list.
 * Return: the integer.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
