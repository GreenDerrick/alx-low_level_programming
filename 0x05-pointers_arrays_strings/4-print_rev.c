#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse
 *
 * @s: variable to be manipulated
 * Return:nothing
 */
int _len(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
return (len);
}

void print_rev(char *s)
{
	int i;
	int first;
	int last;

	first = 0;
	last = (_len(s)) - 1;

	while (s[last] != s[first])
	{
		_putchar(s[last]);
		last--;
	}
	_putchar(s[first]);
}
