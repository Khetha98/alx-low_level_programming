#include "hash_tables.h"

/**
 * hash_table_set - adds the element to a hash table.
 * @ht: it the hash table
 * @key: it the key
 * @value: value associated with a key.
 * value must be duplicated. value allowed to be empty string
 * Return: 1 on success, 0 on failurre
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

hash_node_t *n;
hash_node_t *new_node;
unsigned long int ind;

if (ht == NULL || *key == '\n' || *value == '\n')
	return (0);

ind = key_index((const unsigned char *)key, ht->size);
n = ht->array[ind];

if (n == NULL)
{
	new_node = create_new_node(key, value);
	if (new_node == NULL)
		return (0);

	ht->array[ind] = new_node;
	return (1);
}

/*If key exists, replace value*/
while (n != NULL)
{
	if (strcmp(key, n->key) == 0)
	{
		free(n->value);
		n->value = strdup(value);
		return (1);
	}
	n = n->next;
}
/*If key doesn't exist, create new node*/
new_node = create_new_node(key, value);
if (new_node == NULL)
	return (0);

new_node->next = ht->array[ind];
ht->array[ind] = new_node;
return (1);
}

/**
 * create_new_node - create the new node
 * @key: is the key. key can not be the empty string
 * @value: value associated with a key.
 * value must be duplicated. value can be an empty string
 * Return: 1 on success, 0 on failurre
 */

hash_node_t *create_new_node (const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}
