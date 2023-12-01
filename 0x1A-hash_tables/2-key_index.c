#include "hash_tables.h"


/**
 * key_index - returns an index of the key
 * @key: is the key
 * @size: size of an array of a hash table
 * Return: returns the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ind = hash_djb2(key) % size;

	return (ind);
}
