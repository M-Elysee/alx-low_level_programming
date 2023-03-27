#include "main.h"
/**
*swap_int - swaps 2 integers
*@a: is the first pointer pointing to a memory with the first value
*@b:is the second pointer pointing to a memory with the second value
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
