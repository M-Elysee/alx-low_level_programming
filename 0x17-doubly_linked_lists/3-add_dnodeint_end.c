#include "lists.h"
/**
* add_dnodeint_end - add a node at the end of a double linked list
* @head:  points to the head of double linked list
* @n: is the element contained in the node
* Return: the adddress of the element on success
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (h && h->next)
		h = h->next;
	new->prev = h;
	if (h)
		h->next = new;
	else
		*head = new;
	return (new);
}
