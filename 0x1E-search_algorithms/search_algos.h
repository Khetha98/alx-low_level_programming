#ifndef A094B056_D9A2_4D4B_9BC3_CC89AA69227A
#define A094B056_D9A2_4D4B_9BC3_CC89AA69227A

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
  * @index: it the index
 *
 * Description: singly linked list node structure
 * for alx project
 */
typedef struct listint_s
{
int n;
size_t index;
struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - singly linked list
 * @index: index of node
 * @next: points to the next node
 * @express: pointer to next node in express line
 * @n: integer
 *
 * Description: singly linked list node structure
 * for alx project
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;


int linear_search(int *array, size_t size, int value);
int searching(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int bin_search(int *array, size_t left, size_t right, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* A094B056_D9A2_4D4B_9BC3_CC89AA69227A */
