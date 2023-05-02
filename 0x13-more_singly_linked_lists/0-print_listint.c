#include "lists.h"
/**
* print_listint - print out all the elements of the list
* @h: points to the list
* Return: number of nodes on success
*/
size_t print_listint(const listint_t *h)
{
	if (h)
	{
		printf("%d\n", h->n);
		if (h->next == NULL)
			return (1);
		return (1 + print_listint(h->next));
	}
	return (0);
}
