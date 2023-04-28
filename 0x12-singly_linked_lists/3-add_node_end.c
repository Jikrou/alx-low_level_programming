#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_ode;
	char *w_str;
	list_t *cur;

if (head == NULL || str == NULL)
{
return (NULL);
}
n_ode = malloc(sizeof(list_t));
if (n_ode == NULL)
{
return (NULL);
}
w_str = strdup(str);
if (w_str == NULL)
{
free(n_ode);
return (NULL);
}
n_ode->str = w_str;
n_ode->len = strlen(w_str);
n_ode->next = NULL;
if (*head == NULL)
{
*head = n_ode;
return (n_ode);
}
cur = *head;
while (cur->next != NULL)
{
cur = cur->next;
}
cur->next = n_ode;
return (n_ode);
}
