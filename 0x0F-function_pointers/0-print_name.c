#include "function_pointers.h"

/**
 * print_name - Prints a name.
 *
 * @name: The name.
 * @f: Pointer to function with @name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	(*f)(name);
}
