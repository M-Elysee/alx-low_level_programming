#include "lists.h"
/**
* sum_dlistint - returns the sum of all data(n) in the list
* @head: points to the head of the list
* Return: the sum on success
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int s = 0;

	while (h)
	{
		s = s + h->n;
		h = h->next;
	}
	return (s);
}
