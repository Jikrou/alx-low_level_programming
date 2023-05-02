#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a pointer to a pointer to the head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *fl;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		fl = *head;
		*head = (*head)->next;
		free(fl);
	}
}
