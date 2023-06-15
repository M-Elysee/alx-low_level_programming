#include "lists.h"
/**
* free_dlistint - frees memory occupied by a double linked list
* @head: points to the head of the linked list
*/
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next == NULL)
		{
			free(head);
			return;
		}
		free_dlistint(head->next);
		free(head);
	}
}
