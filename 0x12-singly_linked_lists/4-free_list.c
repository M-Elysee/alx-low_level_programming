#include "lists.h"
/**
*free_list - frees the memory allocated to the list
*@head: pointes to the list
*/
void free_list(list_t *head)
{
	if (!head)
		return;
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}

