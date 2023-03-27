#include "main.h"
/**
*_puts - prints s string to stdout
*@str: is a pointer to the memory with a string
*/
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
