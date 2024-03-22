#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a dlistint_t list.
 * @head: pointer to the pointer to the head of the list
 * @n: value to be stored in the new node
 * Return: Adresse of the new node, NULL if it fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newn = malloc(sizeof(dlistint_t));

	if (newn == NULL)
	{
		return (NULL);
	}
	newn->n = n;
	newn->prev = NULL;
	newn->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = newn;
	}
	*head = newn;
	return (newn);
}


