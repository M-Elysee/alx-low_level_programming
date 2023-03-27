#include "main.h"
/**
*rev_string - reverses a string
*@s:points to the string's address
*/
void rev_string(char *s)
{
	int k, i = 0, a = 0;
	char swp[10];

	while (*(s + i) != '\0')
	{
		i++;
	}
	k = i;
	k++;

	while (i >= 0)
	{
		swp[a] = *(s + i);
		
		i--;
		a++;
	}
	while (k>=0)
	{
		*(s + i) = swp[i];
		_putchar(*(s + i));
		i++;
		k--;
	}
}
