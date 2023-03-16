#include<stdio.h>
/**
*main - entry point
*Return: 0 on success
*/
int main(void)
{
	printf("Size of a char: %ld bytes(s)", sizeof(char));
	printf("Size of an int: %ld bytes(s)", sizeof(int));
	printf("Size of a long int: %ld bytes(s)", sizeof(long int));
	printf("Size of a long long int: %ld bytes(s)", sizeof(long long int));
	printf("Size of a float: %ld bytes(s)", sizeof(float));
	return (0);
}
