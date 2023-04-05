#include "main.h"
int _sqrt(int n, int i);
/**
*_sqrt_recursion - prints the natural square of number
*@n: is the number
*Return: the naural root or -1 if it does not
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
*_sqrt - finds the square root of natural number
*@n: is the number
*@i: help in looping
*Return: the natural numbers or -1 if it doesn't
*/
int _sqrt(int n, int i)
{
	if (n <= 0 || (i == n && n != 1))
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
