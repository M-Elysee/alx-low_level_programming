#include "lists.h"
/**
* insert_nodeint_at_index - it inserts a node at a given position
* @head: points to a pointer to the head of the linked list
* @idx: is the position of insertion
* @n: is the data to be contained
* Return: the address of the new node or NULL on error
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *tp = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL || *head == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	for (i = 0; tp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			temp->next = tp->next;
			tp->next = temp;
			return (temp);
		}
		else
			tp = tp->next;
	}
	return (NULL);
}
