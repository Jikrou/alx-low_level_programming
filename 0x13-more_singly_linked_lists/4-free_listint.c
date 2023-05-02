#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to the head of the list
*/
void free_listint(listint_t *head)
{
	listint_t *fl;

	while (head != NULL)
	{
		fl = head;
		head = head->next;
		free(fl);
	}
}
