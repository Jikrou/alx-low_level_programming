#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list.
 * @head: a pointer to the list
 * @index: the index of the node, starting at 0
 * Return: the node in the given index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *n_ode;

	if (head == NULL)
	{
		return (NULL);
	}

	n_ode = head;
	while (head != NULL)
	{
		if (j == index)
			return (n_ode);

		n_ode = n_ode->next;
		++j;
	}
	return (NULL);
}
