#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_numbers - print numbers with their separator
 * @separator: variable that holds a separatpr
 * @n: last variable in the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(num, int);

		if (i != (n - 1) && separator != NULL)
		{
			separator = "";
			printf("%s", separator);
		}
		printf("%d%s", number, separator);
	}
	printf("\n");
}
