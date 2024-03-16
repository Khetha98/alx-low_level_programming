#include "search_algos.h"

/**
 * jump_search - searches for the value in the array of
 * integers using Jump search algorithm
 *
 * @array: is the input array
 * @size: is the size of the array
 * @value: it the value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int ind, n, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	n = (int)sqrt((double)size);
	k = 0;
	prev = ind = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", ind, array[ind]);

		if (array[ind] == value)
			return (ind);
		k++;
		prev = ind;
		ind = k * n;
	} while (ind < (int)size && array[ind] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, ind);

	for (; prev <= ind && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
