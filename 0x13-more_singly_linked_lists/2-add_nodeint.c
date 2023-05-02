#include "lists.h"
/**
* add_nodeint - prepend a node on a list*
* @head: points to the pointer to the head of the list
* @n: is the integer to be conatined in the node
* Return: the address of the new element or NULL on error
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
