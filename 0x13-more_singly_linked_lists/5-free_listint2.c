#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees the list.
 * @head: Address of the node.
 **/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
