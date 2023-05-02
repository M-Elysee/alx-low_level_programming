#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a linked list
* @head: pointes to a pointer to the list
* @index: is the index of the node to be returned
* Return: the node or NULL on error
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; head != NULL && tmp->next; i++)
		tmp = tmp->next;
	if (head == NULL || index > i)
		return (NULL);
	for (i = 0; index != 0 && i < index; i++)
		temp = temp->next;
	return (temp);
}

