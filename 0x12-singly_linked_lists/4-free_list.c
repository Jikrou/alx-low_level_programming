#include "lists.h"
/**
 * free_list - a function that frees a list_t list
 * @head: pointer to head of the list
 * Description: frees each node in the list starting from head
*/
void free_list(list_t *head)
{
	list_t *vatem;

	while (head != NULL)
	{
		vatem = head;
		head = head->next;
		free(vatem->str);
		free(vatem);
	}
}
