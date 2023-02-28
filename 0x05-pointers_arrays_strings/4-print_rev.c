#include "main.h"
/**
 * print_rev - print string in reverse
 *
 * @s: variable to be manipulated
 */
void print_rev(char *s)
{
	int number;
	
	number = s['\0'];
	while(number != 0)
	{
		_putchar(s + '0');
		number--;
	}
	_putchar('\n');

}
