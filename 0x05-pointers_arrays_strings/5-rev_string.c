#include "main.h"
/**
*rev_string - reverses a string
*@s:points to the string's address
*/
void rev_string(char *s)
{
	int k = 0, i = 0;
	char rev[100];

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		rev[k] = *(s + i);
		k++;
		i--;
	}
	for (i = 0; i < k; i++)
	{
		*(s + i) = *(rev + i);
	}
}
