#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string of the name to be print
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
