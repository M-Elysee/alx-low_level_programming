#include "search_algos.h"
/**
* linear_search - a function that searches a value in an array of integer
* using linear search algorithm
* @array: points to  the array in which we are going to make the search
* @size: is the length of the array
* @value: is the value to be searched in the array
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; array && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
