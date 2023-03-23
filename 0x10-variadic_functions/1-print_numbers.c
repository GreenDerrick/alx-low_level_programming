#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function to print all numbers passed as arguments
 *
 * @separator: poiner value
 * @n: integer unsigned
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(numbers);
	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator != NULL && i != n)
		{
			printf("%d", va_arg(numbers, int));
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
