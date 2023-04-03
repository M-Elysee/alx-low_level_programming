#include "main.h"
/**
*_strstr - find the first occurence of a substring into a string
*@haystack: points to the string
*@needle: points to the substring
*Return: from the first occurence of the substring if any
*/
char *_strstr(char *haystack, char *needle)
{
	int i, k, m;

	for (i = 0; *(haystack); i++)
	{
		m = 0;
		for (k = 0; *(needle + k); k++)
		{
			if (*(haystack + i + k) != *(needle + k))
			{
				m = 1;
				break;
			}
		}
		if (m == 0)
		{
			return (haystack + i);
		}
	}
	return (NULL);
}

