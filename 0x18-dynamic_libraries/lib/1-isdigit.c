#include "main.h"
/**
*_isdigit - check if we have a digit or not
*@c: is the input provided
*Return: 1 if it is a digit or 0 if not
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
