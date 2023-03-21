#include "main.h"
/**
*print_last_digit - to print the last digit
*@a:is the number to find it's last digit
*Return: the last digit
*/
int print_last_digit(int a)
{
	int i;

	i = a % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
