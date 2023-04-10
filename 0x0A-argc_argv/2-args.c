#include "main.h"
#include <stdio.h>
/**
*main - prints all arguments in the command line
*@argc: reprents the number of arguments
*@argv: points to the array of the arguments
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

