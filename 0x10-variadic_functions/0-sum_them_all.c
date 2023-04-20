#include "variadic_functions.h"
/**
*sum_them_all - find the summation of all arguments
*@n: is the number of arguments
*Return: the sum on success or 0 on error
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);
	va_end(ap);
	return (sum);
}

