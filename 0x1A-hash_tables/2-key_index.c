#include "hash_tables.h"
/**
 * key_index - a function that gives the index of a key.
 * @key: pointer to the key
 * @size:  is the size of the array of the hash table
 * Return: he index at which the key/value pair should be stored in the
 * array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key);
	return (idx % size);
}
