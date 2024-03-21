#include "lists.h"
/**
 * dlistint_len -  a function that returns the number of elements in
 * a linked dlistint_t list.
 * @h: pointer to the doubly linked list
 * Return: the number of element
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
