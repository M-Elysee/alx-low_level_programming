#include "lists.h"
/**
* get_dnodeint_at_index - returns the a node at a given index
* @head: points to the head of the list
* @index: is the position of the node to be returned
* Return: the node on success or NULL on error
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int i = 0;

	while (h)
	{
		if (i != index)
			i++;
		else
			return (h);
		h = h->next;
	}
	return (NULL);
}
