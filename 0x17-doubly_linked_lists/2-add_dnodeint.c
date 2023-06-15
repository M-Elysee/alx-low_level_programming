#include "lists.h"
/**
* add_dnodeint - add a a new node at the begining of a list (double linked)
* @head: is the head of the linked list
* @n: is the element to be contained in the double linked list
* Return: the address or the pointer to the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = h;
	if (h)
		h->prev = new;
	*head = new;
	return (new);
}
