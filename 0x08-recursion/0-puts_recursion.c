#include "main.h"
/**
*_puts_recursion - print out a string using recursion
*@s:points to the string
*/
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
