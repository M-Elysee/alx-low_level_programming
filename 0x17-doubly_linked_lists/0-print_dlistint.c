#include "lists.h"
/**
* print_dlistint - prints elements of a double linked list
* @h: points to the head of the linked list
* Return: number of nodes on success
*/
size_t print_dlistint(const dlistint_t *h)
{
	if (!h)
		return (0);
	printf("%d\n", h->n);
	if (h->next == NULL)
		return (1);
	return (1 + print_dlistint(h->next));
}
