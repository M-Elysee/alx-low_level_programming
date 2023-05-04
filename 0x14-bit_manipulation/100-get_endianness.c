#include "main.h"
/**
* get_endianness - determine the endianning system of our machine
* big endianning: the memory start with the storage of the most
* sognificant bit.
* small endianning: the memory start with the storage of the least
* significant bit.
* Return: 1 on little endian and 0 for big endian
*/
int get_endianness(void)
{
	unsigned int i;
	char *chr;

/*it would be easier to check by setting only the list significant bit*/
	i = 1;
	chr = (char *) &i;
	return (*chr);
}
