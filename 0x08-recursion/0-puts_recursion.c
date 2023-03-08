#include "main.h"
/**
 * _puts_recursion -  print eache character in a string s
 * @s: the string to be manipulated
 *
 * Return: none
 */

void _puts_recursion(char *s)
{
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
