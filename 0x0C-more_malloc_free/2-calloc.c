#include "main.h"
#include <stdlib.h>
/**
*_calloc - it allocates a memory for an array
*@nmemb: is the number of element of the array
*@size: is the size of each element
*Return: a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
}
