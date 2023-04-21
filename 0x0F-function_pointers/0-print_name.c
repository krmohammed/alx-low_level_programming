#include "function_pointers.h"

/**
 * print_name - prints the name (passed into the fuction pointer)
 * @name: name to be printed
 * @f: fuction pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(0);
	f(name);
}
