#include "main.h"
/**
*cap_string - to capitalize a string
*@n:points to the string
*Return: the pointer of the capitalised string
*/
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != 0; i++)
	{
		if (n[i] >= 97 && n[i] <= 122 && i != 0)
		{
			if (n[i - 1] == ' ' || n[i - 1] == '\t' || n[i - 1] == '\n')
				n[i] = n[i] - 32;
			else if (n[i - 1] == ',' || n[i - 1] == ';' || n[i - 1] == '.')
				n[i] = n[i] - 32;
			else if (n[i - 1] == '!' || n[i - 1] == '?' || n[i - 1] == '"')
				n[i] = n[i] - 32;
			else if (n[i - 1] == '(' || n[i - 1] == ')' || n[i - 1] == '{')
				n[i] = n[i] - 32;
			else if (n[i - 1] == '}')
				n[i] = n[i] - 32;
		}
		else if (n[i] >= 97 && n[i] <= 122 && i == 0)
			n[i] = n[i] - 32;
	}
	return (n);
}
