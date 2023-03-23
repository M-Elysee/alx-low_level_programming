#include "main.h"
/**
*print_line - prints a line proportinal to the input number provided
*@n:is the number representing the lign length
*/
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
