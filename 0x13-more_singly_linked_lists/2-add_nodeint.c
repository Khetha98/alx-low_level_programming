#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node to the beginning of a list.
 * @head: Address of the first node of the list.
 * @n: Integer to insert into a new node.
 * Return: Address.
 **/


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;

	tp = malloc(sizeof(listint_t));
	if (tp == NULL)
		return (NULL);

	tp->n = n;
	tp->next = *head;
	*head = tp;
	return (*head);
}
