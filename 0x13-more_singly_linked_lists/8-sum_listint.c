#include "lists.h"
/**
* sum_listint - find the sum of the list link data
* @head: points to the linked list
* Return: the sum on success
*/
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	if (head->next == NULL)
		return (head->n);
	return (head->n + sum_listint(head->next));
}
