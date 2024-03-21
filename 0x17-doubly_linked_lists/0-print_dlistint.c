#include "lists.h"
/**
print_dlistint - a function that prints all the elements of a dlistint_t list.
@h: pointer to the doubly linked list
Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;
	if (h == NULL)
		return (1);

	while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			x++;
		}
	return (x);
}
