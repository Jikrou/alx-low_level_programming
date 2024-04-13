#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: ht is the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *elm;
	int pin = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		elm = ht->array[i];
		while (elm != NULL)
		{
			if (pin)
				printf(", ");
			printf("'%s': '%s'", elm->key, elm->value);
			/*printf(", ");*/
			pin = 1;
			elm = elm->next;
		}
	}
	printf("}\n");

}
