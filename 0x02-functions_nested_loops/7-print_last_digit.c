#include "main.h"
/**
*print_last_digit - to print the last digit
*@a:is the number to find it's last digit
*Return: the last digit
*/
int print_last_digit(int a)
{
	int i;

	if (a < 0)
	{
		a = a * -1;
	}
	i = a % 10;
	_putchar(i + '0');
	return (i);
}
