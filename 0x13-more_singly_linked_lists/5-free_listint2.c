#include "lists.h"
/**
* free_listint2 - frees the memory allocated to a list*
* @head: pointes to the list
*/
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (!head)
		return;
	while (t)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	*head = NULL;
}
