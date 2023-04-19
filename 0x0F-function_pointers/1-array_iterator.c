#include "function_pointers.h"
/**
* array_iterator - executes a function given as parameter
*@array: points to the array of values
*@size: is the size of the array
*@action: is the pointer to the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; size > 0 && i < size; i++)
		{
			action(array[i]);
		}
	}
}
