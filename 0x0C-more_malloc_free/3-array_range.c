#include "main.h"
#include <stdlib.h>
/**
*array_range - creates an array with element in a given range
*@min: is the minimum element of the array
*@max: is the maximum element of the array
*Return: a pointer to the array
*/
int *array_range(int min, int max)
{
	int i, s;
	int *p;

	if (max < min)
		return (NULL);
	s = max - min + 2;
	p = malloc(sizeof(int) * s);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < (s - 1); i++)
	{
		p[i] = min;
		min++;
	}
	p[s - 1] = '\0';
	return (p);
}

