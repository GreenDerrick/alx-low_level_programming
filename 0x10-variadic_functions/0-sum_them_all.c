#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * sum_them_all - functions that adds all parameters provided in an input
 * @n: constant value : not be include in the addition
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	int num;

	va_list(add);
	va_start(add, n);
	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		num = va_arg(add, int);
		sum = num + sum;
	}
	_putchar('\n');
	va_end(add);
	return (sum);
}
