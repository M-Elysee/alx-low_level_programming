#include "main.h"
/**
*largest_number - to provide the biggest number
*@a: is the first number
*@b: is the second number
*@c: is the third number
*Return: the largest number on success
*/
int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b >= largest)
	{
		largest = b;
	}
	if (c >= largest)
	{
		largest = c;
	}
	return (largest);
}
