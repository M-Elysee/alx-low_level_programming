#include "lists.h"
/**
* print_list - prints the elements of a node
* @h: points to a node
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	if (h->next == NULL)
		return (1);
	return (1 + print_list(h->next));
}


