#include "lists.h"
/**
 *delete_dnodeint_at_index - a function that deletes the node at index index 
 *of a dlistint_t linked list.
 *@head: pointer to a pointer to the head of the list
 *@index: is the index of the node that should be deleted. Index starts at 0
 *Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *rem = *head;
	unsigned int i = 0;

	if (rem == NULL)
		return (-1);
	
	while (rem != NULL)
	{
		if (i == index)
		{
			if (rem->prev != NULL)
				rem->prev->next = rem->next;
			else
				*head = rem->next;

			if (rem->next != NULL)
				rem->next->prev = rem->prev;
			
			free(rem);
			return (1);
		}
		rem = rem->next;
		i++;
	}
	return (-1);
}
