#include "main.h"
/**
*rot13 - does the rot13 cypher
*@n:pointes to the plain text
*Return: the cypher text
*/
char *rot13(char *n)
{
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		j = 0;
		while (j < 13 && ((n[i] >= 65 && n[i] <= 90) || (n[i] >= 97 && n[i] <= 122)))
		{
			if (n[i] == 90 || n[i] == 122)
			{
				n[i] = n[i] - 26;
			}
			n[i]++;
			j++;
		}
	}
	return (n);
}

