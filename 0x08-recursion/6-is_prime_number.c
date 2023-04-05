#include "main.h"
int _prime(int n, int i);
/**
*is_prime_number - determine whether a number is prime or not
*@n:is the number to be evaluated
*Return: 1 if it is prime or 0 if not
*/
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
/**
*_prime - does the calculation
*@i: helpes in looping
*@n: is the number to be evaluated
*Return: 1 if it is prime or 0 if not
*/
int _prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (_prime(n, i + 1));
}
