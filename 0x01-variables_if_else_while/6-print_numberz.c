#include <stdio.h>
/**
*main - entry
*Return: 0
*/
int main(void)
{
	int i = 0;

	do {
		putchar('0' + i);
		i++;
	} while (i < 10);
	putchar('\n');
	return (0);
}
