#include "main.h"
/**
*_islower - to determine if a character is in lower case or not
*@c:is the character to test
*Return: 1 if it is lower, 0 if not
*/
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
