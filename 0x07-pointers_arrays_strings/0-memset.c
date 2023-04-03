#include "main.h"
/**
*_memset - fills the first n bytes of the memory with a constant byte
*@b: is the constant byte
*@s: is the pointer to the memory
*@n: is the maximum bytes to be filled
*Return: the filled memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
