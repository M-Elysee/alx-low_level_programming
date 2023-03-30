#include "main.h"
/**
*reverse_array - reverse an array
*@a:points to the array
*@n:is the number of elements of the array
*/
void reverse_array(int *a, int n)
{
	int i, swap;

	for (i = n - 1; i >= n / 2; i--)
	{
		swap = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = *(a + i);
		*(a + i) = swap;
	}
}
