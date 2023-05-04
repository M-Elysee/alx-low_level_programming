#include "main.h"
/**
* set_bit - sets the value of a bit to 1 at a given position**
* @index: is the position at which we want 1
* @n:  points to the number we want to modify
* Return: 1 on success or 0 on error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}
