#include "lists.h"

/**
 * listint_len - Calculate the number of list elements.
 * @h: Pointer that points to a list.
 * Return: the integer.
 **/


size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cnr = 0;

	tp = h;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}
	return (cnr);
}
