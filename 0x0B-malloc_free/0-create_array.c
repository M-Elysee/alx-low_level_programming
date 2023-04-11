#include "main.h"
#include <stdlib.h>
/**
*create_array - creates an array
*@size:is the size of the array to be created
*@c: is the initialisation character of the array
*Return: a pointer to the array or null if it failes
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[size] = '\0';
	return (arr);
}

