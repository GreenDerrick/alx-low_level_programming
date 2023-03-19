#include "main.h"
/**
 * print_sign - print the sign of a number positive OR negative
 *
 * @n: variable to be manipulated: formal parameter
 * Return: +, 0, and -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	if (n == 0)
	{
		_putchar('0');
		return ('0');
	}
	
	if (n < 0)
	{	
		_putchar('-');
		return ('-1');
	}
	return (n);
}
