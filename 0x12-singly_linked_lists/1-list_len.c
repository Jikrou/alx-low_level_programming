#include "lists.h"

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list.
 * @h: pointer to a head of a linked list
 * Return: the number of nodes in the list
*/
size_t list_len(const list_t *h)
{
	size_t ndm = 0;

	while (h != NULL)
	{
		ndm++;
		h = h->next;
	}
	return (ndm);
}
