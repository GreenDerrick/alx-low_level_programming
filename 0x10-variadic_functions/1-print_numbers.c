#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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

	for (i = 0; i <= n; i++)
	{
		number = va_arg(num, int);
		printf("%d", number);
		if (i == (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
