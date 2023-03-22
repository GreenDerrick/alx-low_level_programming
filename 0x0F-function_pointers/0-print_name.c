#include "function_pointers_h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - function to print the name variables
 *
 * @name: variable to be printed
 * @f: function pointer name
 * Return: No return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
