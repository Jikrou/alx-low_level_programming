#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a pointer to a head of a linked list
 * Return: the number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	size_t ndm = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		ndm++;
	}
	return (ndm);
}
