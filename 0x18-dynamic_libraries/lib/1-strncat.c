#include "main.h"
/**
*_strncat - concatenates two strings (the second to the first)
*@n: is the number of character of the second string to be concatenated
*@dest: is the pointer to the frist string
*@src: is the pointer to the second string
*Return: a pointer of the concatenated  string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i); i++)
	{}
	for (j = 0; j < n; j++)
	{
		if (*(src + j) != '\0')
		{
			*(dest + i) = *(src + j);
			i++;
		}
		else
			break;
	}
	*(dest + i) = '\0';
	return (dest);
}
