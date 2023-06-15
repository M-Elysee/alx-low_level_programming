#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node a given position
* @h: points to the head of the list
* @idx: is the positions at which we are going to insert a node
* @n: is the element to be conatined in the node
* Return: the node address on success or null on fail
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *new;
	unsigned int i = 0;

	while (head)
	{
		if (i != idx)
		{
			i++;
			head = head->next;
		}
		else
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = head->prev;
			new->next = head;
			(head->prev)->next = new;
			head->prev = new;
			return (new);
		}
	}
	return (NULL);
}
