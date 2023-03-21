#include "main.h"
/**
*print_alphabet_x10 - generates 10 rows containing all aphabets
*Return: nothing
*/
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
