#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all the arguments that will be in the function
 *
 * @n: constant unsigned integer
 * @...: variadic function declaration
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum;

	va_list(name);
	sum = 0;

	va_start(name, n);

	if (n == 0)
		return (0);

	for (i = n; i >= 2; i = va_arg(name, int))
	{
		sum = sum + va_arg(name, int);
	}
	va_end(name);
	return (sum);
}
