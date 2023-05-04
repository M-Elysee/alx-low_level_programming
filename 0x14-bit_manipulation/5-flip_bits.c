#include "main.h"
/**
* flip_bits - provides the number of bits to flip for our number to match**
* @n: is the first number in the comparison
* @m: is the second number int the comparison
* Return: the number of possible  bits to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m, j;
	unsigned int k = 0;

	for (j = 0; j < 64; j++)
	{
		if ((i >> j) & 1UL)
			k++;
	}
	return (k);
}

