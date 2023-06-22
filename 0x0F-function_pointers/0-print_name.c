#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - function to print a name from a function pointer
 * @name: varibale to be manipulated
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(1);
	f(name);
}
