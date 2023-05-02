#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer to a pointer to the head of the list
 * @n: integer to be added to the new node
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_ode;

	if (head == NULL)
	{
		return (NULL);
	}

	n_ode = malloc(sizeof(listint_t));
	if (n_ode == NULL)
	{
		return (NULL);
	}

	n_ode->n = n;
	n_ode->next = *head;
	*head = n_ode;

	return (n_ode);
}
