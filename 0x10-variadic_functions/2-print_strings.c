#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that will print the strings only
 *
 * @separator: variable pointer
 * @n: last element in the function prototype
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i <= n; i++)
	{
		str = va_arg(strings, char *);

		if (separator == NULL)
		{
			printf("%s", str);
		}
		else if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s %s", str, separator);
		}
	}
	printf("\n");
}
