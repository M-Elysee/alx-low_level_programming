#include "variadic_functions.h"
#include <stdio.h>
/**
* print_strings - prinsts strings passed as arguments
* @n: is the numbr of strings passed
* @separator:  points to strings used for concatination in printing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *m;

	va_start(arg, n);
	for (i = 0; n > 0 && i < n; i++)
	{
		m = va_arg(arg, char *);
		if (m == NULL)
			m = "(nil)";
		if (i != n - 1 && separator != NULL)
			printf("%s%s", m, separator);
		else
			printf("%s", m);
	}
	printf("\n");
	va_end(arg);
}
