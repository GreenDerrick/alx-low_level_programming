#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - function to print numbers provided by the user
 * @separator: separated the numbers printed
 * @n: constant value never seen in output
 * Return: nothin
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;

	va_list(print);

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(print, int);
		if (separator == NULL)
		{
			separator = "";
			printf("%d", number);
		}
		else
		{
			printf("%d%s", number, separator);
		}
	}
	printf("\n");
	va_end(print);
}
