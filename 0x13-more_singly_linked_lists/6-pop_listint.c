#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list,and returns the head node’s data (n).
 * @head: pointer to a pointer to the list
 * Return: an integer
*/
int pop_listint(listint_t **head)
{
	int r = 0;
	listint_t *sup;

	if (*head == NULL)
	{
		return (0);
	}

	r = (*head)->n;
	sup = *head;
	*head = (*head)->next;
	free(sup);

	return (r);
}
