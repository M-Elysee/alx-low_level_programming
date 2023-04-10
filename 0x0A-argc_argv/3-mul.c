#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - multiply two argumments
* @argc: reprents the number of arguments
* @argv: points to the array of command line arguments
* Return: 0 on success or 1 on error
*/
int main(int argc, char *argv[])
{
	int i, s, m = 1;

	for (i = 1; i < argc || argc == 1; i++)
	{
		if (argc == 3)
		{
			s = atoi(argv[i]);
			m = m * s;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", m);
	return (0);
}

