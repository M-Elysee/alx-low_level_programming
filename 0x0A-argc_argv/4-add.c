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
	int i, s = 0, m;

	for (i = 1; i < argc || argc == 1; i++)
	{
		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		else if (atoi(argv[i]) == 0)
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
