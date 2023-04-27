#include "lists.h"
#include <string.h>
/**
* add_node - add a node at the beginning of a list
* @head: points to the first node
* @str: points to the string in the node
* Return: the address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (temp);
}
