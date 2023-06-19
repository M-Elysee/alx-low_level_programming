#include "main.h"
/**
*_puts - prints s string to stdout
*@s: is a pointer to the memory with a string
*/
void _puts(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
