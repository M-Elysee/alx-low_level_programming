#include <stdio.h>
/**
*main - to find the biggest prime factor of a number
*Return: always 0
*/
int main(void)
{
	long int i = 2, big = 1, r = 612852475143;

	while (r > 1)
	{
		if ((r % i) == 0)
		{
			do {
				big = i;
				r = r / i;
			} while ((r % i) == 0);
		}
		i++;
	}
	printf("%ld\n", big);
	return (0);
}
