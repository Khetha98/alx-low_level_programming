#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for the value in array of
 * integers using Jump search algorithm
 *
 * @list: it the input list
 * @size: is the size of the array
 * @value: it the value to search in
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t ind, k, m;
	listint_t *p;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	ind = 0;
	k = 0;

	do {
		p = list;
		k++;
		ind = k * m;

		while (list->next && list->index < ind)
			list = list->next;

		if (list->next == NULL && ind != list->index)
			ind = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)ind, list->n);

	} while (ind < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)p->index, (int)list->index);

	for (; p && p->index <= list->index; p = p->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)p->index, p->n);
		if (p->n == value)
			return (p);
	}

	return (NULL);
}
