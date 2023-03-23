#include "main.h"
/**
*more_numbers - to print in 10 rows numbers from 1 to 14 using only 3 _putchar
*/
void more_numbers(void)
{
	int i, k, f, s;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			f = k / 10;
			s = k % 10;
			if (k > 9)
			{
				_putchar(f + '0');
			}
			_putchar(s + '0');
		}
		_putchar('\n');
	}
}

