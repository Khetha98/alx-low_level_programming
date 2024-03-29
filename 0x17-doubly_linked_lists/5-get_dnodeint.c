#include "lists.h"

/**
 * get_dnodeint_at_index - returns
 * nth node of the dlistint_t linked list
 *
 * @head: is the head of the list
 * @index: is the index of the nth node
 * Return: returns the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;


	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;


	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}


	return (head);
}
