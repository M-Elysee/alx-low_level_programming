#include "main.h"
/**
*jack_bauer - prints every minutes of the (jack Bauer day)24 hour day
*Return: nothing
*/
void jack_bauer(void)
{
	int h, k, m, i;

	for (h = 0; h <= 2; h++)
	{
		for (k = 0; k <= 9; k++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (i = 0; i <= 9; i++)
				{
					if ((h * 10) + k <= 23)
					{
						_putchar(h + '0');
						_putchar(k + '0');
						_putchar(':');
						_putchar(m + '0');
						_putchar(i + '0');
						_putchar('\n');
					}
					else
						break;
				}
			}
		}
	}
}
