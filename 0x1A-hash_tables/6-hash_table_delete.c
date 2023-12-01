#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 * @ht: it the hash table you want to delete
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int inte;
hash_node_t *node;

if (ht == NULL)
	return;

for (inte = 0; inte < ht->size; inte++)
{
	node = ht->array[inte];
	free_hash_list(node);
}
free(ht->array);
free(ht);
}



/**
 * free_hash_list - frees the hash_node_t list
 * @head: head of a linked list
 */
void free_hash_list(hash_node_t *head)
{
	hash_node_t *current;
	hash_node_t *n;

	current = head;

	while (current != NULL)
	{
		n = current->next;
		free(current->key);
		free(current->value);
		free(current);
		current = n;
	}
}
