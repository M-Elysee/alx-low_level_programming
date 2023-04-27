#include"lists.h"
/**
*list_len - returns the length of the list
*@h: points to the list
*Return: the length
*/
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	if (h->next == NULL)
		return (1);
	return (1 + list_len(h->next));
}
