#include "variadic_functions.h"
#include <stdio.h>
/**
*print_all - prints arguments with different datatypes
*@format: points to an array of data type symboles
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arg;
	char *d;
	char *separator = "";

	va_start(arg, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", separator, va_arg(arg, int));
			break;
			case 'i':
			printf("%s%d", separator, va_arg(arg, int));
			break;
			case 'f':
			printf("%s%f", separator, va_arg(arg, double));
			break;
			case 's':
			d = va_arg(arg, char *);
			if (d == NULL)
				d = "(nil)";
			printf("%s%s", separator, d);
			break;
			default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(arg);
}
