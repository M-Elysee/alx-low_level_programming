#include "lists.h"
/**
* dlistint_len - returns number of elements in a double linked list
* @h: points to the header of the linked list
* Return: return the number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	if (!h)
		return (0);
	if (h->next == NULL)
		return (1);
	return (1 + dlistint_len(h->next));
}
