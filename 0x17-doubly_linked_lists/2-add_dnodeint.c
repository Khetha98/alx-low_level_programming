#include "lists.h"


/**
 * add_dnodeint - Adds the new node to the beginning
 *
 * @head: represents the Head
 *
 * @n: it a Value
 *
 * Return: returns the dlistint_t
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *temp, *node = malloc(sizeof(dlistint_t));



	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;


	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (*head);
	}

	temp = *head;
	node->next = temp;
	temp->prev = node;
	*head = node;
	return (node);
}