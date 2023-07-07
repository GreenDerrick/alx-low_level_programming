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
	int a;
	unsigned int value;

	value = 0;
	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		value = 2 * value + (b[a] - '0');
	}

	return (value);
}
