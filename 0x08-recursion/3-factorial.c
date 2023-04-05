#include "main.h"
/**
*factorial - provides the factorial of integers
*@n:is the number to be computed
*Return: the factorial on success or -1 on error
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
