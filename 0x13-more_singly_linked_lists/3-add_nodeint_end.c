#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end of
 * a listint_t list.
 * @head: a pointer to a pointer to the head of the list
 * @n: integer to be added to the new node
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_ode;
	listint_t *e_ode;

	n_ode = malloc(sizeof(listint_t));
	if (n_ode == NULL)
		return (NULL);

	n_ode->n = n;
	n_ode->next = NULL;

	if (*head == NULL)
	{
		*head = n_ode;
		return (n_ode);
	}
	e_ode = *head;
	while (e_ode->next != NULL)
	{
		e_ode = e_ode->next;
	}

	e_ode->next = n_ode;
	return (n_ode);
}

