#include "lists.h"
/**
* delete_dnodeint_at_index - delete node at agiven index
* @head: is the head of the linked list
* @index: is the position at which it's node must be deleted
* Return: 1 on success and -1 on error
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	unsigned int i = 0;

	while (h)
	{
		if (i != index)
		{
			i++;
			h = h->next;
		}
		else if (index == 0)
		{
			*head = (*head)->next;
			free(h);
			return (1);
		}
		else
		{
			(h->prev)->next = h->next;
			free(h);
			return (1);
		}
	}
	return (-1);
}
