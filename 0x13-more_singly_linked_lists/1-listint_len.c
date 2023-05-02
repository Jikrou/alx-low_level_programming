#include "lists.h"
/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list
 * @h: pointer to a linked list
 * Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t ndm = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		ndm++;
		h = h->next;
	}
	return (ndm);
}
