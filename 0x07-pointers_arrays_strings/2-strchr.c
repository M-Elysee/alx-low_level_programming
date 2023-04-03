#include "main.h"
/**
*_strchr - returns the pointer of the first occurence of a character
*@s:the pointer to the string
*@c:the character to be pointed to
*Return: a pointer to the character or null if it is not in the string
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
