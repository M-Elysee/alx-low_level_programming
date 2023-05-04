#include "main.h"
/**
* print_binary - convert a decimal number into binary a print it**
* @n: is the number
*/
void print_binary(unsigned long int n)
{
	int i, j = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1UL)
		{
			j++;
			_putchar('1');
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}

