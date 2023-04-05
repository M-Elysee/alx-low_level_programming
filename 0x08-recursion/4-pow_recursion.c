#include "main.h"
/**
*_pow_recursion - provides the value of x raised to power of y
*@x: is the value to be raised
*@y: is the power
*Return: the solution
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
