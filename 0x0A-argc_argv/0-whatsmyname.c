#include <stdio.h>
/**
*main - prints the name of the program
*@argc: is the number of commandline arguments
*@argv: is array of command line arguments
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
