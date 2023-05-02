#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: pointer to the list
 * Return: the sum of data n
*/
int sum_listint(listint_t *head)
{
	unsigned int tot = 0;

	while (head != NULL)
	{
		tot += head->n;
		head = head->next;
	}
	return (tot);
}
