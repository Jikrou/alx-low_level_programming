#include "lists.h"
/**
 *sum_dlistint -  a function that returns the sum of all the data (n) of a
 *dlistint_t linked list.
 *@head: pointer to the head of the list
 *Return: if the list is empty, return 0
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int s = 0;

	if (node == NULL)
		return (0);

	while (node != NULL)
	{
		s += node->n;
		node = node->next;
	}
	return (s);
}
