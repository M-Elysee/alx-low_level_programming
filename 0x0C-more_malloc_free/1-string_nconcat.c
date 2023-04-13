#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - concatinates n bytes of one string to another
*@s1: pointes to the first string
*@s2: pointes to the second string
*@n: is the number of the second string bytes to be added on s1
*Return: a pointer the newly allocated space
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, j, m, s;
	char *p;

	for (i = 0; s1 != NULL && *(s1 + i); i++)
	{}
	for (k = 0; s2 != NULL && *(s2 + k); k++)
	{}
	if (n >= k)
		n = k;
	if (i != 0)
		i++;
	s = i + n;
	p = malloc(sizeof(char) * s);
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < s; j++)
	{
		if (j < i)
		{
			p[j] = s1[j];
		}
		else if (n != 0)
		{
			m = j - i;
			p[j] = s2[m];
		}
	}
	p[s] = '\0';
	return (p);
}
