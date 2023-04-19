#include "function_pointers.h"
/**
* int_index - provide if an array values checkes in function
* @array: points to an array
* @size: is the length or size of the array
* @cmp: points to the function used for checking
* Return: the index of the element on success or -1 on error
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; size > 0 && i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
