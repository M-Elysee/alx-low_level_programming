#include "main.h"
#include <stdlib.h>
/**
*free_grid - free the memory of a given 2 diimetion array
*@grid: points to the 2 dimetional array
*@height: is the number of rows of the array
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
