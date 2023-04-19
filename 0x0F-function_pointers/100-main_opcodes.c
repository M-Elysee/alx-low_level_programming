#include <stdio.h>
#include <stdlib.h>
/**
*main - prints it own opcode
*@argc: is the number of argument in the commandline
*@argv: it an array of pointers to the araguments
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i, a;
	unsigned char opcode;
	int (*ptr)(int, char**) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < a; i++)
	{
		opcode = *(unsigned char *)ptr;
		printf("%.2x", opcode);
		if (i != a - 1)
			printf(" ");
		ptr++;
	}
	printf("\n");
	return (0);
}
