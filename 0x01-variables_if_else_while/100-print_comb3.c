#include <stdio.h>
/**
*main - entry point
*Return: 0 on success
*/
int main(void)
{
	int k;
	int i;

	for (k = 0; k <= 8; k++)
	{
		for (i = (k + 1); i <= 9; i++)
		{
			putchar('0' + k);
			putchar('0' + i);
			if ((k * 10) + i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
