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
	int i;
	int binary;

	for (i = 11; i >= 0; i--)
	{
		binary = (n >> i) & 1;
		_putchar(binary + '0');
	}
	_putchar('\n');
}
