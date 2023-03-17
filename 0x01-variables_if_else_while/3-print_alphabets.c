#include <stdio.h>
/**
*main - entry
*Return: 0 om success
*/
int main(void)
{
	char c;
	char k = '\n';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar(k);
	return (0);
}
