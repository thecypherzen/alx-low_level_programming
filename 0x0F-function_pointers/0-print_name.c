#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: fxn ptr
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
