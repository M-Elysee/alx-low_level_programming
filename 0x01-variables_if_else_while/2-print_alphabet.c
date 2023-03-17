#include <stdio.h>
#include <ctype.h>
/**
*main - entry point
*Return:0 on success
*/
int main(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(tolower(c));
	}
	return (0);
}
