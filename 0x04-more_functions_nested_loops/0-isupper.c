#include "main.h"
/**
*_isupper - check wether a character is in upper case or not
*@c: is the character to be checked
*Return: 1 if it is upper case or 0 if it is lower case
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
