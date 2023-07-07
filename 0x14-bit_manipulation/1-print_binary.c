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
	long  int i, a, binary;

	if ((signed int)n >= 0 && n <= 1)
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
		a = 12;
	for (i = a; i >= 0; i--)
	{
		binary = (n >> (i)) & 1;
		_putchar(binary + '0');
	}
	_putchar('\n');
}
