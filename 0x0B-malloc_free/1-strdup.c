#include "main.h"
#include <stdlib.h>
/**
*_strdup - allocates space in memory and copy in a string
*@str: pointe to the string
*Return: a pointer to the duplicate of the string or NULL on error
*/
char *_strdup(char *str)
{
	int i, k;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i); i++)
	{}
	i++;
	p = malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		p[k] = str[k];
	}
	p[i] = '\0';
	return (p);
}
