#include "main.h"
/**
*_strpbrk - return from the first character of s where it matches accept
*@s:points to the main string
*@accept: points to the string used for checking
*Return: pointer from the first occurence if any or null if not
*/
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != 0; i++)
	{
		for (k = 0; accept[k] != 0; k++)
		{
			if (s[i] == accept[k])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}



