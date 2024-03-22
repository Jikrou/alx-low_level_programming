#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at the end of a
 * dlistint_t list
 * @head: Pointer to the pointer to the head of the list
 * @n: Value to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newn = malloc(sizeof(dlistint_t));
	dlistint_t *nod = *head;

	if (newn == NULL)
	{
		return (NULL);
	}
	newn->n = n;
	newn->next = NULL;

	if (*head == NULL)
	{
		newn->prev = NULL;
		*head = newn;
	}
	else
	{
		while (nod->next != NULL)
		{
			nod = nod->next;
		}

		nod->next = newn;
		newn->prev = nod;
	}


	return (newn);
}
