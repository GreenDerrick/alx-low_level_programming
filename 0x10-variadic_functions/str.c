#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str - function to print string
 * @c: variable to be manipulated
 * Return: 0
 */

void str(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return;
}
