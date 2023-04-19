#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * rev_string - function to reverse a string
 *
 * @s: variable to be manipulated
 * Return: nothing
 */
int len(char *s)
{
	int i;
	int length;

	for (i = 0; s[i] != '\0'; i++)
	{
		length = i + 1;
	}
	return (length);
}


void rev_string(char *s)
{
	int i;
	int first;
	int last;

	first = 0;
	last  = (len(s)) - 1;

	while (s[last] != 0)
	{
		_putchar(s[last]);
		last--;
		first++;
	}
	_putchar(s[first]);
}
