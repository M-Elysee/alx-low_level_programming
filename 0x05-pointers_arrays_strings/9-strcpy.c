#include "main.h"
/**
*_strcpy - copy a string to a buffer inluding the terminating null
*@dest: is the destination of the coppy
*@src: is the source of the string
*Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0, k;

	while (*(src + i) != 0)
	{
		i++;
	}
	for (k = 0; k <= i; k++)
	{
		*(dest + k) = *(src + k);
	}
	return (dest);
}
