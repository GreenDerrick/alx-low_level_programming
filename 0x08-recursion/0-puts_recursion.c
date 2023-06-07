#include "main.h"
/**
 * _puts_recursion - function that prints a string
 *
 * s: variable to be manipulated
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
