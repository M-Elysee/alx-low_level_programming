#include "main.h"
/**
* clear_bit - it sets the bit value at a given position to 0**
* @index: is the position at which we want a 0
* @n: points to a number which we have to modify
* Return: 1 on success or -1 on error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & (~(1UL << index));
	return (1);
}
