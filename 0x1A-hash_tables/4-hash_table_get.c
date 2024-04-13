#include "hash_tables.h"
/**
 * hash_table_get -  a function that retrieves a value associated with a key.
 * @ht: is the hash table to look into
 * @key: is the key we are looking for
 * Return: the value associated with the element, or NULL
 * if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *cur;

	if (ht == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	cur = ht->array[idx];
	if (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			if (cur->value == NULL)
				return (NULL);
			return (cur->value);
		}
	}

	return (NULL);
}
