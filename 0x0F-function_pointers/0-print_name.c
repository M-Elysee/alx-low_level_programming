#include "function_pointers.h"
#include <stdlib.h>
/**
*print_name - pass araguments in functions
*@name: is the name to be passed
*@f:points to the functions
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
