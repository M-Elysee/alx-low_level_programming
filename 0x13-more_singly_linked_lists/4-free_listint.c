#include "lists.h"
/**
* free_listint - frees the memory allocated to a list*
* @head: pointes to the list
*/
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next == NULL)
		{
			free(head);
			return;
		}
		free_listint(head->next);
		free(head);
	}
}
