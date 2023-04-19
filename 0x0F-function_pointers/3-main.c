#include "3-calc.h"
/**
*main - performs certain operations on commandline arguments
*@argc: is the number of arguments
*@argv: as an array of pointers to all arguments
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	char a;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	a = *argv[2];
	if ((a == '+' || a == '-' || a == '*' || a == '/' || a == '%') && !argv[2][1])
	{
		if ((a == '/' || a == '%') && (num2 == 0))
		{
			printf("Error\n");
			exit(100);
		}
		fun = get_op_func(argv[2]);
		printf("%d\n", fun(num1, num2));
		return (0);
	}
	printf("Error\n");
	exit(99);
	return (0);
}
