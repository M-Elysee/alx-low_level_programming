#include "main.h"
/**
*string_toupper - turns a string into upper case
*@n: points to the string
*return: the pointer to the string in upper case
*/
char *string_toupper(char *n)
{
	int i;
	for (i = 0; *(n + i) != 0; i++)
	{
		if (*(n + i) >= 97 && *(n + i) <= 122)
			*(n + i) = *(n + i) - 32;
	}
	return (n);
}
