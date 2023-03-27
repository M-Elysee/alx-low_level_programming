#include "main.h"
/**
*puts2 - prints every other character of a string
*@str: points to a string's memory
*/
void puts2(char *str)
{
	int i = 0, k;

	while (*(str + i) != 0)
	{
		i++;
	}
	k = i;
	for (i = 0; i < k; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
