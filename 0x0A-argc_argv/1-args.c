#include <stdio.h>
/**
*main - prints the number of arguments passed into the commandine
*@argc: represents number of arguments
*@argv: points to the array of command line arguments
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", --argc);
	return (0);
}
