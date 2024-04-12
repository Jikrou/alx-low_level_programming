#include "hash_tables.h"
/**
 * hash_table_set - a function that add elements to the hash table
 * @ht: the hash tabe to update or add a key value to
 * @key: is the key can't be empty string
 * @value: the value associated with the key can be an empty string
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *curr;
	unsigned long int idx = 0;

	if (ht == NULL || strlen(key) == 0)
		return (0);

	idx = key_index((unsigned char *) key, ht->size);
	curr = ht->array[idx];
	if (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			curr->value = strdup(value);
			if (curr->value == NULL)
				return (0);
			return (1);
		}
		curr = curr->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new->value);
		return (0);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
