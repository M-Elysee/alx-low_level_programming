#include "main.h"
/**
*_strlen_recursion - provides the length of a string
*@s: points to the string
*Return: the length of the string on success
*/
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
