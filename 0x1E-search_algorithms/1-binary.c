#include "search_algos.h"

/**
 * searching - searches for the value in array of
 * integers using Binary search algorithm
 *
 *
 * @arr: is the input array
 * @s: is the size of the array
 * @value: is the value to search in
 * Return: index of a number
 */
int searching(int *arr, size_t s, int value)
{
	size_t half = s / 2;
	size_t i;

	if (arr == NULL || s == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < s; i++)
		printf("%s %d", (i == 0) ? ":" : ",", arr[i]);

	printf("\n");

	if (half && s % 2 == 0)
		half--;

	if (value == arr[half])
		return ((int)half);

	if (value < arr[half])
		return (searching(arr, half, value));

	half++;

	return (searching(arr + half, s - half, value) + half);
}

/**
 * binary_search - calls searching function to return
 * the index of a number
 *
 * @array: is the input array
 * @size: is the size of the array
 * @value: is the value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = searching(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
