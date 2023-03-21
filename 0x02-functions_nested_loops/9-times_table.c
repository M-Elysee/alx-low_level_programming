#include "main.h"
/**
*times_table - to print the 9 times table
*Return: nothing
*/
void times_table(void)
{
	int i, j, p, f, s;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = j * i;
			if (p > 9)
			{
				s = p % 10;
				f = p / 10;
				_putchar(f + '0');
				_putchar(s + '0');
				_putchar(',');
			}
			else
			{
				_putchar(p + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
