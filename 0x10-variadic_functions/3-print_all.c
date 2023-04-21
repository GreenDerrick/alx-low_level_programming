#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - print all character provided
 * 
 * @format: last argument
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	char c;
	int d;
	float f;
	char *s;

	va_list all;

	va_start(all, format);

	for (i = 0; i < *format; i++)
		printf("%d", va_arg(all, int));
}
