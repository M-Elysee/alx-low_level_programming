#include "main.h"
#include <stdlib.h>
/**
*str_concat - allocate a memory for a concatination of 2 strings
*@s1: points to the first string
*@s2: points to the second string
*Return: a pointer to the allocated memory or NULL on error
*/
char *str_concat(char *s1, char *s2)
{
	int n, i, k, j, s;
	char *p;

	for (i = 0; s1 != NULL && *(s1 + i); i++)
	{}
	for (k = 0; s2 != NULL && *(s2 + k); k++)
	{}
	s = i + k;
	if (s != 0)
		s++;
	p = malloc(sizeof(char) * s);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < s; j++)
	{
		if (j < i)
			p[j] = s1[j];
		else if (k != 0)
		{
			n = j - i;
			p[j] = s2[n];
		}
	}
	p[s] = '\0';
	return (p);
}

