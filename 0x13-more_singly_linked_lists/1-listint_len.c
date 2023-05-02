#include "lists.h"
/**
* listint_len - returns number of elements of a linked list*
* @h: points to the head of the list
* Return: number of nodes on success
*/
size_t listint_len(const listint_t *h)
{
	if (h)
	{
		if (h->next == NULL)
			return (1);
		return (1 + listint_len(h->next));
	}
	return (0);
}
