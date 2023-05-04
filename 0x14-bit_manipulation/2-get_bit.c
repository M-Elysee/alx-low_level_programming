#include "main.h"
/**
* get_bit - provides  the bit value at a given position in a number**
* @n: is the number to be cheched
* @index: is the position at which we want to extract the contained bit
* Return: the value of the bit or -1 on error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1UL);
}
