#include <stdio.h>
#include "main.h"

/**
 * _puts - function that prints a string and a new line
 *
 * @str: variable pointer to be manipulated
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}	
	_putchar('\n');
}
