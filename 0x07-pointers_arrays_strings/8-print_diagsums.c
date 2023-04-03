#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints diagonal sums of square matrices
*@a:points to the matrice
*@size: is the dimation of the matrice
*/
void print_diagsums(int *a, int size)
{
	int i, k, s1 = 0, s2 = 0;

	for (i = 0; i <= size * size; i = i + size + 1)
		s1 = s1 + *(a + i);
	for (k = size - 1; k <= (size * size) - size; k = k + size - 1)
		s2 = s2 + *(a + k);
	printf("%d, %d\n", s1, s2);
}
