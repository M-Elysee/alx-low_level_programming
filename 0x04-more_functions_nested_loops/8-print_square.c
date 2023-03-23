#include "main.h"
/**
*print_square - prints a square made if #
*@size:determines its dimations
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (j = 1; j <= size; j++)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
