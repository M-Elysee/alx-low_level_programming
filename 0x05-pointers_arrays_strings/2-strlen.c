#include "main.h"
/**
*_strlen - countes the length of a string
*@s: is points to the memory containing the array of character(string)
*Return: the length of the string
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
