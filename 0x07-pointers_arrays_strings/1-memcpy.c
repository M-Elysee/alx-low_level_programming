#include "main.h"
/**
*_memcpy - copy up to n bytes from src memeory area to dest
*@src: the the memory area to copy n bytes
*@dest: the memory area to paste the n bytes
*@n:the number of bytes to be copied
*Return:a  pointer to the destination area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
