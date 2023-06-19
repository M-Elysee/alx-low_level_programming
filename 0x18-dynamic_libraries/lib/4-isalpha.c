#include "main.h"
/**
*_isalpha - check alphabetical characters
*@c: is the charater to be checked
*Return: 1 if it is an alphabet and 0 if not
*/
int _isalpha(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i == c)
			return (1);
	}
	for (i = 97; i <= 122; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
