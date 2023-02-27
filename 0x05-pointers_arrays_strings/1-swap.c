# include "main.h"

/**
 * swap_int - takes in two integer values
 * and swap their values
 * @a: First integer input
 * @b:  Second integer input
 * Return: void/nothing.
 **/

void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
