#include <stdio.h>
void func(void) __attribute__((constructor));
/**
*func - prints a message before main function execution
*/
void func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
