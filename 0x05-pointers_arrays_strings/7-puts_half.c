#include "main.h"
/**
*puts_half - prints half of a string starting in the middle
*@str: points to the string's memory
*/
void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
		while (*(str + i) != 0)
		{
			_putchar(*(str + i));
			i++;
		}
	}
	else
	{
		i = (i - 1) / 2;
		i++;
		while (*(str + i) != 0)
		{
			_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
