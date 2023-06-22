#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name from a function pointer
 * @name: variable to be manipulated
 * @f: function pointer name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(1);
	f(name);
}
