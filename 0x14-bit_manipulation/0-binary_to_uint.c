#include "main.h"
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - function that converts a binary to a number
 * @b: variable to be manipulated
 * Return: 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int size, i, new, final, power, base, raise;

	size = strlen(b);
	base = 2;
	power = 0;
	final = 0;

	for (i = size - 1; i >= 0; i--)
	{
		new = b[i] - '0';
		raise = (base *= 2);
		final += new * raise;
		power++;
	}
	return (final);
}
