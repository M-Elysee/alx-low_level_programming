#include "variadic_functions.h"
#include <stdio.h>
/**
*print_numbers - prints passed arguments
*@separator: points to a sting separating the arguments in printing
*@n: is the number of arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list k;

	va_start(k, n);
	for (i = 0; separator != NULL && n > 0 && i < n; i++)
	{
		if (i != n - 1)
			printf("%d%s", va_arg(k, int), separator);
		else
			printf("%d\n", va_arg(k, int));
	}
	va_end(k);
}
