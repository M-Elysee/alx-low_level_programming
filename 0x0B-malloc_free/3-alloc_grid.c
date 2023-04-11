#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - allocate memory for a 2 dimentional array of integer
*@width: is the number of column of the array
*@height: is the number of rows of the array
*Return: a pointer to the array or NULL on error
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width == 0 || height == 0)
		return (NULL);
	p = malloc(height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
			if (p[i] == NULL)
			{
				for (j = i; j >= 0; j--)
					free(p[j]);
				return (NULL);
			}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
