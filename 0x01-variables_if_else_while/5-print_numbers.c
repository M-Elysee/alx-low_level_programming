#include <stdio.h>
/**
*main - entry
*Return: 0
*/
int main(void)
{
	int i = 0;
	char k = '\n';

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar(k);
	return (0);
}
