#include "search_algos.h"

/**
 * recurs_search - searches for the value in array of
 * integers using Binary search algorithm
 *
 *
 * @array: is the input array
 * @size: it the size of the array
 * @value: is the value to search in
 * Return: index of the number
 */
int recurs_search(int *array, size_t size, int value)
{
	size_t h = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (h && size % 2 == 0)
		h--;

	if (value == array[h])
	{
		if (h > 0)
			return (recurs_search(array, h + 1, value));
		return ((int)h);
	}

	if (value < array[h])
		return (recurs_search(array, h + 1, value));

	h++;
	return (recurs_search(array + h, size - h, value) + h);
}

/**
 * advanced_binary - calls recurs_search to return
 * index of the number
 *
 * @array: is the input array
 * @size: is the size of the array
 * @value: it the value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int ind;

	ind = recurs_search(array, size, value);

	if (ind >= 0 && array[ind] != value)
		return (-1);

	return (ind);
}
