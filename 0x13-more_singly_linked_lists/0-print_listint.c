#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: pointer to a linked list
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t ndm = 0;

if (h == NULL)
return (0);

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
ndm++;
}
return (ndm);
}
