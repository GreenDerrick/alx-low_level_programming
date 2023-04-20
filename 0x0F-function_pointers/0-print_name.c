#include "function_pointers.h"
/**
 * print_name - function to print charater pointes
 *
 * @name: variable to be manipualted
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && print_name)
		f(name);
}
