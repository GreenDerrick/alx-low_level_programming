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

	va_list print;

	va_start(print, n);
	i = 0;
	while (i < n)
	{
		number = va_arg(print, int);
		printf("%d", number);
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(print);
}
