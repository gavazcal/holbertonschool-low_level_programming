#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: name
 * @f: points to function
 * @*: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
