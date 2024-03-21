#include "lists.h"
/**
<<<<<<< HEAD
 *print_dlistint - a function that prints all the elements of
 *a dlistint_t list.
 *@h: pointer to the doubly linked list
 *Return: number of nodes
=======
print_dlistint - a function that prints all the elements of a dlistint_t list.
@h: pointer to the doubly linked list
Return: number of nodes
>>>>>>> db3701fb1470f64440e081f91574117abef39a23
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;
<<<<<<< HEAD

	if (h == NULL)
		return (1);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
=======
	if (h == NULL)
		return (1);

	while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			x++;
		}
>>>>>>> db3701fb1470f64440e081f91574117abef39a23
	return (x);
}
