#include "main.h"
/**
 * print_rev - print string in reverse
 *
 * @s: variable to be manipulated
 */
void print_rev(char *s)
{
	int number;

	for (number = s['\0']; number != 0; number--)
	{
		_putchar(s[number]);
	}
	_putchar(s[number]);
	_putchar('\n');
}
