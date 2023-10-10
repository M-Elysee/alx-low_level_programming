#include "search_algos.h"
/**
* binary_search - does a search usinf binary search argorithm
* @array: points to the array into which we are going to search a value
* @size: the size of the array
* @value: the value to be searched
* Return: the index where the value is at or -1 on failure
*/
int binary_search(int *array, size_t size, int value)
{
	size_t middle, lower = 0, bigger = size - 1, i;

	while (array)
	{
		printf("Searching in array: ");
		for (i = lower; i < bigger; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[bigger]);

		if (lower >= bigger)
		{
			if (array[lower] == value)
				return (bigger);
			return (-1);
		}
		middle = (lower + bigger) / 2;
		if (array[middle] > value)
			bigger = middle - 1;
		else if (array[middle] < value)
			lower = middle + 1;
		else if (array[middle] == value)
			return (middle);
	}
	return (-1);
}
