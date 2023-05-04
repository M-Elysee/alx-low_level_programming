#include "main.h"
/**
* binary_to_uint - covert binary numbers to unsigned int**
* @b: points to the binary bits
* Return: the integer on success or 0 on error
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int s = 0;
	int p = 1, i, j;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
	}
	for (j = i; j > 0; j--)
	{
		s = s + ((b[j - 1] - '0') * p);
		p = p * 2;
	}
	return (s);
}
