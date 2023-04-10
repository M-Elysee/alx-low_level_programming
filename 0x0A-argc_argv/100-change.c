#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - to calculate the minimum number if change
*@argc: is the number of arguments
*@argv: is the array of argument passed in the command line
*Return: 0 on success or 1 on error
*/
int main(int argc, char *argv[])
{
	int m, s, d = 0, j;

	for (j = 0; argc != 1 && argv[1][j]; j++)
	{
		if (argv[1][j] < 48 || argv[1][j] > 57)
			d++;
	}
	if (argc != 2 || d > 0)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	/* adding the 25 cent change if possible depending on the amount*/
	s = m / 25;
	m = m % 25;
	/* adding the 10 cent change if possible depending on the amount*/
	s = s + (m / 10);
	m = m % 10;
	/* adding the 5 cent change if possible depending on the amount*/
	s = s + (m / 5);
	m = m % 5;
	/* adding the 2 cent change if possible depending on the amount*/
	s = s + (m / 2);
	m = m % 2;
	/* adding the 1 cent change if possible depending on the amount*/
	s = s + (m / 1);
	printf("%d\n", s);
	return (0);
}
