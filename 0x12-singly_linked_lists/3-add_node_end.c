#include "lists.h"
#include <string.h>
/**
*add_node_end -add a node at the end of a list_t list
*@head: points to the pointer to the node
*@str: points to a string
*Return: the address of the new node or null on error
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *temp;
	list_t *tmp = *head;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	temp->len = i;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (tmp->next)
		tmp = tmp->next;
	(tmp)->next = temp;
	return (temp);
}

