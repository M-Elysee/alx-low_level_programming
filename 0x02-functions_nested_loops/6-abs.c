#include "main.h"
/**
*_abs - provides the aboslute value of an integer
*@a: is a parameter that provides the integer
*Return: the absolute value of the number
*/
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
