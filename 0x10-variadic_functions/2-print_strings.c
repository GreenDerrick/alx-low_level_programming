#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - function to print all strings passed in an argument
 *
 * @separator: character pointer
 * @n: integer unsigned constant variable
 * Return: nothing its of return value void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(strings);
	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(strings, char *) == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(strings, char *));

		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strings);
}
