#include "main.h"
/**
 * _print_rev_recursion - print strings in reverse
 *
 * @s: string to be manipulated
 *
 * Return none;
 */
void _print_rev_recursion(char *s)
{
	for(*s = '\0'; *s = 0; s--)
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
	_putchar('\n');
}
