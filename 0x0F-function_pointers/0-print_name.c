#include "function_pointers.h"
/**
*print_name - pass araguments in functions
*@name: is the name to be passed
*@f:points to the functions
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
