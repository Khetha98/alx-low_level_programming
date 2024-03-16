#include "search_algos.h"

/**
 * linear_search - searches for the value in array of
 * integers using Linear search algorithm
 *
 * @array: it the input array
 * @size: is the size of the array
 * @value: it  the value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < (int)size; j++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
