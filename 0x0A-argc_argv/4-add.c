#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - add arguments
* @argc: reprents the number of arguments
* @argv: points to the array of command line arguments
* Return: 0 on success or 1 on error
*/
int main(int argc, char *argv[])
{
	int i, m, d = 0;
	unsigned int j, s = 0;

	for (i = 1; i < argc || argc == 1; i++)
	{
		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
				d++;
		}
		if (d > 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			m = atoi(argv[i]);
			s = s + m;
		}
	}
	printf("%d\n", s);
	return (0);
}
