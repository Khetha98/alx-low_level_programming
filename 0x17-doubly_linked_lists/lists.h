#ifndef A2BAB340_5C72_408E_9E1B_829894568842
#define A2BAB340_5C72_408E_9E1B_829894568842


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dlistint_s - is a doubly linked list
 * @n: it an integer
 * @prev: points to previous node
 * @next: points to next node
 *
 * Description: this is a doubly linked list node structure
 * for Alx the project
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
void free_dlistint(dlistint_t *head);

#endif /* A2BAB340_5C72_408E_9E1B_829894568842 */
