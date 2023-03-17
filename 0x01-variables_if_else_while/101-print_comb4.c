#include <stdio.h>
/**
*main - entry point
*Return: 0 on success
*/
int main(void)
{
	int j;
	int k;
	int i;

	for (j = 0; j <= 7; j++)
	{
		for (k = (j + 1); k <= 8; k++)
		{
			for (i = (k + 1); i <= 9; i++)
			{
				putchar('0' + j);
				putchar('0' + k);
				putchar('0' + i);
				if ((j * 100) + (k * 10) + i != 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
