 #include "lists.h"
/**
* free_listint2 - frees the memory allocated to a list*
* @head: pointes to the list
*/
void free_listint2(listint_t **head)
{
	if ((*head) != NULL)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			return;
		}
		free_listint2(&((*head)->next));
		free(*head);
	}
	*head = NULL;
}
