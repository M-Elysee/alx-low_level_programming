#include "main.h"
/**
*print_diagonal - prints a diagonal line in the terminal
*@n:determine the length
*/
void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		for (k = 1; k <= i; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
