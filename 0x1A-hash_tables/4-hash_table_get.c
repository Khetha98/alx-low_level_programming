#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with the key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: returns value associated with key if found, NULL if failed
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

hash_node_t *n;
unsigned long int index;

if (ht == NULL)
	return (NULL);

index = key_index((const unsigned char *) key, ht->size);
n = ht->array[index];

while (n != NULL)
{
	if (strcmp(n->key, key) == 0)
		return (n->value);

	n = n->next;
}
return (NULL);
}
