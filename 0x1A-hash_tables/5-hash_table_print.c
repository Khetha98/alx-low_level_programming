#include "hash_tables.h"

/**
 * hash_table_print - prints the hashtable
 * @ht: it the hash table you want to print
 */
void hash_table_print(const hash_table_t *ht)
{

unsigned long int inte;
hash_node_t *node;
short int comma = 0;

if (ht == NULL)
	return;

putchar('{');
for (inte = 0; inte < ht->size; inte++)
{
	node = ht->array[inte];
	while (node != NULL)
	{
		if (comma)
			printf(", ");

		printf("'%s': '%s'", node->key, node->value);
		node = node->next;

		if (comma == 0)
			comma = 1;
	}
}
printf("}\n");
}
