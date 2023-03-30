#include "main.h"
/**
*_strncpy - copies n character of one string into another
*@dest: the first string to be added into a copy
*@src: the second string whose n character chunck will be copied
*@n:the number of characters to be copied
*Return: the changed string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k;

	/* counting the length of the 2 strings*/
	for (i = 0; *(src + i) != 0; i++)
	{} i--;
	for (k = 0; *(dest + k) != 0; k++)
	{} k--;
	/* when the needed chunck is greater than the second string*/
	if (i < n)
	{
		for (j = 0; j < i; j++)
			*(dest + j) = *(src + j);
		if (k < i)
			*(dest + j) = '\0';
		else
		{
			for (j = i; j < n; j++)
				*(dest + j) = '\0';
		}
	}
	/*when the needed chunck is less or equal to the second string*/
	else
	{
		for (j = 0; j < n; j++)
			*(dest + j) = *(src + j);
		if (k < i)
			*(dest + j) = '\0';
	}
	return (dest);
}
