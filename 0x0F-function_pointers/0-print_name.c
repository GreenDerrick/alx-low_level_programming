#include "main.h"
/**
 * print_name - function to print charater pointes
 *
 * @name: variable to be manipualted
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
