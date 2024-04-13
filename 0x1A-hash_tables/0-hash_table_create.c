#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table.
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table, NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *new = malloc(sizeof(hash_table_t));

if (new == NULL)
	return (NULL);

if (size == 0)
	return (NULL);

new->array = malloc(size * sizeof(hash_node_t *));
if (new->array == NULL)
{
	free(new);
	return (NULL);
}
for (i = 0; i < size; i++)
{
	new->array[i] = NULL;
}

new->size = size;
return (new);
}
