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
	listint_t *temp, *tp, *t, *tmp, *k;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (*head == NULL)
	{
		temp->next = NULL;
		*head = temp;
		return (temp);
	}
	tmp = *head;
	tp = *head;
	for (i = 0; tmp->next; i++)
		tmp = tmp->next;
	if (idx > i)
		return (NULL);
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	for (i = 0; idx != 0 && i < idx; i++)
	{
		k = tp;
		tp = tp->next;
	}
	t = tp->next;
	k->next = temp;
	temp->next = t;
	return (temp);
}
