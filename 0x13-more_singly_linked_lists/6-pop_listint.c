#include "lists.h"
/**
* pop_listint - removes the head node of a linked list
* @head: pointes to a pointer to the head node
* Return: the head node's data
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
