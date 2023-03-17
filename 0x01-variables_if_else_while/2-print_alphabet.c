#include <stdio.h>
#include <ctype.h>
/**
*main - entry point
*Return:0 on success
*/
int main(void)
{
	char c;
	char k = '\n';

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(tolower(c));
	}
	putchar(k);
	return (0);
}
