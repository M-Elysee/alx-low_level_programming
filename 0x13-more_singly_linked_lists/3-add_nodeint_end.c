#include "lists.h"
/**
* add_nodeint_end - append a node on a list
* @head: points to a pointer to the lists
* @n: is the integer conatined in the node
* Return: the address of the new node or NULL on error
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *tp = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		while (tp->next != NULL)
			tp = tp->next;
		tp->next = temp;
	}
	return (temp);
}

