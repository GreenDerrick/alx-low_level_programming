#include "main.h"
#include <math.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_binary - function that prints binary representation
 * @n: variable to be manipulated
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	long  int i, binary,  b;

	b = 0;
	/**if ((signed int)n >= 0 && n <= 1)
		a = 0;
	else if (n >= 2 && n <= 3)
		a = 1;
	else if (n >= 4 && n <= 7)
		a = 2;
	else if (n >= 8 && n <= 15)
		a = 3;
	else if (n >= 16 && n <= 31)
		a = 4;
	else if (n >= 32 && n <= 63)
		a = 5;
	else if (n >= 64 && n <= 127)
		a = 6;
	else if (n >= 128 && n <= 255)
		a = 7;
	else
		a = 63;*/
	for (i = 63; i >= 0; i--)
	{
		binary = n >> i;
		if (binary & 1)
		{
			_putchar('1');
			b++;
		}
		else if (b)
			_putchar('0');
	}
	if (!b)
		_putchar('0' + 0);
}
