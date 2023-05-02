#include "lists.h"
/**
* delete_nodeint_at_index - deletes a node at a given index
* @head: points to a pointer to the list
* @index: is the position of the node to be deleted
* Return: 1 on success or -1 on fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head, *tmp = *head, *t = *head;

	for (i = 0; t != NULL && t->next; i++)
		t = t->next;
	if (*head == NULL || index > i)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; index != 0 && i < index; i++)
	{
		tmp = temp;
		temp = temp->next;
	}
	tmp->next = temp->next;
	free(temp);
	return (1);
}
