#include "main.h"
/**
*leet - encodes a string into 1337
*@n: points to the string to be encoded
*Return: the encoded string
*/
char *leet(char *n)
{
	int i, j;
	char *let = "aAeEoOtTlT";
	char *rep = "4433007711";

	for (i = 0; *(n + i) != 0; i++)
	{
		for (j = 0; *(let + j) != 0; j++)
		{
			if (*(n + i) == *(let + j))
			{
				*(n + i) = *(rep + j);
			}
		}
	}
	return (n);
}
