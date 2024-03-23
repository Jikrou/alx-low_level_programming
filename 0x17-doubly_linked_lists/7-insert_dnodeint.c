#include "lists.h"
/**
 *insert_dnodeint_at_index -  a function that inserts a new node at a given
 *position.
 *@h: pointer to a poinyer to the head of the list
 *idx: dx is the index of the list where the new node should be added.
 *Index starts at 0
 *@n: the value of the new node
 *Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nod = malloc(sizeof(dlistint_t));
	dlistint_t *nnode = *h;
	unsigned int i = 0;

	if (nod == NULL)
		return (NULL);

	nod->n = n;
	nod->prev = NULL;
	nod->next = NULL;
	
	if (idx == 0)
	{
		nod = add_dnodeint(h, n);
		return nod;
	}

	while (nnode != NULL)
	{
		if (i == idx)
		{
			if (nnode->next == NULL)
			{
				 nod = add_dnodeint_end(h, n);
			}
			else
			{
				nod->next = nnode;
				nod->prev = nnode->prev;
				if (nnode->prev != NULL){
					nnode->prev->next = nod;
					}
			    nnode->prev = nod; 
			}
		}
		nnode = nnode->next;
		i++;
	}
	return (nod);
}
