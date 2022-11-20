#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h> 

/**
 * print_name - function that prints a name
 * @name: Char value
 * @f: Function pointer that takes character strings values
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
