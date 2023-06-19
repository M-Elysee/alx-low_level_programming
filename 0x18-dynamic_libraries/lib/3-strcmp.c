#include "main.h"
/**
*_strcmp - compare 2 strings
*@s1:is the first string
*@s2: is the second string
*Return: 0 when they are equal,
*positive if the first non-matching character in s1 is greater that of s2
*negative if the first non-matching character in s1 less that of s2
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
