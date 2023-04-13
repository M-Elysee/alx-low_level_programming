#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - checkes malloc function and provide status
*@b: is the number of bytes needed
*Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
