#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_strings - function to print strings
 * @separator: separates the strings
 * @n: number of strings passed to the function
 * Return: nothin
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list string;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char*);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}
