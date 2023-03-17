#include <stdio.h>
/**
*main - entry
*Return: 0 on success
*/
int main(void)
{
	char i;
	char k = '\n';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar(k);
	return (0);
}
