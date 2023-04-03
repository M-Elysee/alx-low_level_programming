#include "main.h"
/**
*_strspn - retuns number of byte in one memeory that are present in an other
*@s:the initial segment memory
*@accept: the memory for comparison
*Return: the number of matched bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k, n = 0, m;

	for (i = 0; s[i] != 0; i++)
	{
		m = 0;
		for (k = 0; accept[k] != 0; k++)
		{
			if (s[i] == accept[k])
			{
				n++;
				m++;
				break;
			}
		}
		if (m == 0)
		{
			return (n);
		}
	}
	return (n);
}
