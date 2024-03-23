#include "lists.h"
/**
 *get_dnodeint_at_index -  a function that returns the nth node of a dlistint_t
 *linked list.
 *@head: pointer to the head of the list
 *@index: is the index of the node starting at 0
 *Return: if the node does not exist return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nodein = head;
	unsigned int i = 0;

	while (nodein != NULL)
	{
		if (i == index)
		{
			return (nodein);
		}
		nodein = nodein->next;
		i++;
	}
	return (NULL);
}
